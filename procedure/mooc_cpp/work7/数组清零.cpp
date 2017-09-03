#include<iostream>
using namespace std;
void clear(int a[],int n)
{
	while(n>0){
		*a=0;
		a++;
		n--;
	}
}
int main()
{
	int arr[100];
	int i=0;
	int n;
	cin>>arr[i];
	while(arr[i] != -1){
		i++;
		cin>>arr[i];
	}
	cin>>n;
	clear(arr,n);
	int j=0;
	while(true){
		if(j == i-1){
		cout<<arr[j]<<endl;
			break;
		}
		else{
			cout<<arr[j]<<" ";
		}
		j++;
	}
	return 0;
}
