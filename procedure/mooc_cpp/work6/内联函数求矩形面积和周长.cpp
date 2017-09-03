#include<iostream>
using namespace std;
inline int area(int a,int b)
{
	return a*b;
}
inline int perimeter(int a,int b)
{
	return 2*(a+b);
}
int main()
{
	int a,b,sum1,sum2;
	cin>>a>>b;
	sum1=area(a,b);
	sum2=perimeter(a,b);
	cout<<sum1<<" "<<sum2<<endl;
	return 0; 
}
