#include<iostream>
using namespace std;
void add_array(int a,int *sum)
{
	*sum=*sum+a;
	return;
}
int main()
{
	int arr[100];
	int i=0;
	do{
		cin>>arr[i];
		i++;
	}while(arr[i-1]!=-1);
	int a,b=0;
	int *sum=&b;
	for(int j=0;j<i-1;j++){
		a=arr[j];
		add_array(a,sum);
	}
	cout<<b<<endl;
	return 0;
}
