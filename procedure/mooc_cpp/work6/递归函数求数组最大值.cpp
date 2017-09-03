#include<iostream>
using namespace std;
int Calculate(int a[],int k,int n)
{
	if(n==0)
		return a[k];
	else{
		if(a[n]>a[k])
		k=n;
		Calculate(a,k,n-1);
	}
}
int main()
{
	int n;
	cin>>n;
	int str[n];
	for(int i=0;i<n;i++)
		cin>>str[i];
	cout<<Calculate(str,0,n-1)<<endl;
	return 0;
}
