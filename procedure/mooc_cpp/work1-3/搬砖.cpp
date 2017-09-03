#include<iostream>
using namespace std;
int main()
{
	double k;
	int i,j;
	int n,m=0;
	cin>>n;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	for(k=0;k<n;k++)
	{
		if((n==i+j+k)&&(n==4*i+3*j+k/2))
		{
			m++;
			cout<<"men"<<i<<endl;
			cout<<"women"<<j<<endl;
			cout<<"children"<<k<<endl;
		}
	}
	if(m==0)
	cout<<"no result!"<<endl;
	return 0;
}
