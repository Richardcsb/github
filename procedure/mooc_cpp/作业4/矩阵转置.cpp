#include<iostream>
using namespace std;
int main()
{
	int str[5][5];
	int n;
	cin>>n;
	if(n<1||n>5)
	{
		cout<<"matrix order error";
		exit(0);
	}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>str[i][j];
	for(int j=0;j<n;j++)
		for(int i=0;i<n;i++)
		{
			cout<<str[i][j];
			if(i==n-1)
			cout<<endl;
			else
			cout<<" ";
		}
	return 0;
}
