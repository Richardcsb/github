#include<iostream>
using namespace std;
void reset(int *a,int *b)
{
	int c = int((*a+*b)/2.0+0.5);
	cout<<c<<" "<<c<<endl;
	return;
}
int main()
{
	int a,b;
	cin>>a>>b;
	reset(&a,&b);
	return 0;
}
