#include<iostream>
using namespace std;
int main()
{
	char a,b,n;
	cin>>n;
	if(n>=97&&n<=122)
	{
		b=((n-'a'+1)<=25)?n+1:n-25;
		a=((n-'a'-1)>=0)?n-1:n+25;
	}
	else
	{
		b=((n-'A'+1)<=25)?n+1:n-25;
		a=((n-'A'-1)>=0)?n-1:n+25;
	}
	cout<<a<<n<<b<<endl;
	return 0;
}
