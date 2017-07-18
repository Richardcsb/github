/*输入四则运算表达式，仅由整数、+、-、×、/、（、）组成，没有空格，
对表达式进行递归，将  表达式分为--->项（+、-）--->因子（*、/)--->整数或者括号，要求求其值*/
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int factor_value();      //因子
int term_value();        //项
int expression_value();  //表达式
int main()
{
    cout<<expression_value()<<endl;
    return 0;
}
int expression_value()
{//表达式
    int result = term_value();
    bool more = true;
    while(more){
        char op = cin.peek();  //cin.peek()其功能是从输入流中读取一个字符 但该字符并未从输入流中删除
        if(op == '+' || op == '-'){
            cin.get();         //cin.get()其功能是从输入流中读取一个字符 并删除该字符
            int value = term_value();
            if(op == '+')
                result +=value;
            else
                result -=value;
        }
        else
            more = false;
    }
    return result;
}
int term_value()
{//项
    int result = factor_value();
    while(true){
        char op = cin.peek();
        if(op == '*' || op == '/'){
            cin.get();
            int value = factor_value();
            if(op == '*')
                result *= value;
            else
                result /= value;
        }
        else
            break;
    }
    return result;
}
int factor_value()
{//因子
    int result = 0;
    char c = cin.peek();
    if(c == '('){
        cin.get();
        result = expression_value();
        cin.get();
    }
    else{
        while(isdigit(c)){   //isdigit()主要用于检查参数c是否为阿拉伯数字0到9
            result = 10*result + (c - '0');
            cin.get();
            c = cin.peek();
        }
    }
    return result;
}
