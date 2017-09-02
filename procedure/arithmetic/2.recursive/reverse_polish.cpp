#include<iostream>
#include<cstdlib>
using namespace std;
double exp()
{
        char a[10];
        cin>>a;
        switch(a[0]){
                case '+':return exp()+exp();
                case '-':return exp()-exp();
                case '*':return exp()*exp();
                case '/':return exp()/exp();
                default:return atof(a);                //把字符串转换成浮点数
                break;
        }
}
int main()
{
        cout<<exp()<<endl;
        return 0;
}

