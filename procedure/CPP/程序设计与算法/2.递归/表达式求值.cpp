#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int expression_value();        //表达式 
int term_value();              //项 
int factor_value();            //因子 
int main()
{
	cout<<expression_value()<<endl;
	return 0;
}
int expression_value()
{
	int result = term_value();
	bool more = true;
	while(more){
		char c = cin.peek();               //查看一个字符不取走 
		if(c =='+'||c =='-'){
            cin.get();                     //取走一个字符 
			if(c =='+')	result += term_value();
			else	result -= term_value();
		}
		else	more = false;
	}
	return result;
}
int term_value()
{
	int result = factor_value();
	while(true){
		char c = cin.peek();
		if(c =='*'||c =='/'){
			cin.get();
			if(c =='*')		result *= factor_value();
			else	result /= factor_value();
		}
		else	break;
	}
	return result;
}
int factor_value()
{
	char c = cin.peek();
	int result = 0;
	if(c =='('){
		cin.get();
		result = expression_value();
		cin.get();
	}
	else{
		while(isdigit(c)){                       //判断字符是否为0-9的阿拉伯数字 
				result = result * 10 + (c-'0');
				cin.get();
				c = cin.peek();
		}
	}
	return result;
}
