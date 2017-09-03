#include<iostream>
using namespace std;
int main()
{
	unsigned int a,b,c,d,e,n;
	cin>>n;
	a=n/50;
	if(n>=50)
	n-=50;
	b=n/20;
	if(n>=20)
	n-=b*20;
	c=n/10;
	if(n>=10)
	n-=c*10;
	d=n/5;
	if(n>=5)
	n-=d*5;
	e=n;
	cout<<a<<" ";
	cout<<b<<" ";
	cout<<c<<" ";
	cout<<d<<" ";
	cout<<e<<endl;
	return 0;
}
