#include<iostream>
using namespace std;
int main()
{
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		if(i==0)	
		x=1;
		else
		x=(x+1)*2;
		
	}
	cout<<x<<endl;
	return 0;
}
