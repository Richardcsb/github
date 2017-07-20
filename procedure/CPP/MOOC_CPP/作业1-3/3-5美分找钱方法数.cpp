#include<iostream>
using namespace std;
int main()
{
	int money,n=0;
	cin>>money;
	if(money<100&&money>0)
	{
		for(int l=0;l<4;l++)
		for(int i=0;i<10;i++)
		for(int j=0;j<20;j++)
		for(int k=0;k<100;k++)
		if(money==l*25+10*i+5*j+k)
		n++;
		cout<<n<<endl;
	}
	else
	cout<<"the money is invalid!"<<endl;
	return 0;
}
