#include<iostream>
#include<cmath>
using namespace std;
int a,b,c,m;
int avg(int (*f)(int),int x1,int x2)
{
	int sum=0;
	for(int i=x1;i<=x2;i++){
		sum += (*f)(i);
	}
	cout<<sum/(x2-x1+1)<<endl;
	return 0;
}
int func1(int x)
{
	int y;
	y = a*pow(x,2)+ b*x + c;
	return y;
}
int func2(int x)
{
	int y;
	y = pow(x,m);
	return y;
}
int main()
{
	int up_b,lo_b;
	cin>>a>>b>>c;
	cin>>m;
	cin>>lo_b>>up_b;
	avg(func1,lo_b,up_b);
	avg(func2,lo_b,up_b);
	return 0;
}
