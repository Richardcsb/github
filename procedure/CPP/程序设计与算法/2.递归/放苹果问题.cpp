#include<iostream>
using namespace std;
int apple(int m,int n)
{
	if(n>m)
		return apple(m,m);
	if(m==0)
		return 1;
	if(n==0)
		return 0;
	return apple(m,n-1)+apple(m-n,n);
}
int main()
{
	int n,m;
	while(true){
		cin>>m>>n;
		cout<<apple(m,n)<<endl;
	}
	return 0;
}
