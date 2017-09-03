#include<iostream>
using namespace std;
int min(int a[],int n)
{
	int temp,val;
	val=a[0];
	for(int i=0;i<n-1;i++)
	{
		if(val>a[i+1]){
			temp=val;
			val=a[i+1];
			a[i+1]=temp;
		}
	}
	return val;
}
int max(int a[],int n)
{
	int temp,val;
	val=a[0];
	for(int i=0;i<n-1;i++)
	{
		if(val<a[i+1]){
			temp=val;
			val=a[i+1];
			a[i+1]=temp;
		}
	}
	return val;
}
int main()
{
	int n,i=0,a[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<max(a,n)<<endl<<min(a,n)<<endl;
	return 0;
}
