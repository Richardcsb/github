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
		default:return atof(a);                 //将字符串转换为double(双精度浮点数)包含在stdlib头文件中 
		break;
	}
}
int main()
{
	cout<<exp()<<endl;
	return 0;
}
