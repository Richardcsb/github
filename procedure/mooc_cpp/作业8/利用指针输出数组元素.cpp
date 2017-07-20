#include<iostream>
using namespace std;
int main()
{
	int s[100];
	int n;
	cin>>n; 
	for(int i=0;i<100;i++){
		s[i]=i+1;
	}
	for(int j=0;j<n;j++){
		if(j==0)
			cout<<*s;
		else
			cout<<" "<<*(s+j);
	}
	return 0;
}
