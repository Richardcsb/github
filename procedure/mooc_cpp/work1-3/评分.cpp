#include<iostream>
using namespace std;
int main()
{
	double Ping[10],n,sum=0;
	for(int i=0;i<10;i++)
	cin>>Ping[i];
	for(int j=0;j<10;j++)
	if(Ping[j]>100)
	{
		cout<<"the score is invalid."<<endl;
		exit(0);
	}
	for(int k=1;k<10;k++)
	{
		if(Ping[0]<Ping[k])
		{
			 n=Ping[0];
			 Ping[0]=Ping[k];
			 Ping[k]=n;
		}
	}
	for(int k=1;k<9;k++)
	{
		if(Ping[9]>Ping[k])
		{
			 n=Ping[9];
			 Ping[9]=Ping[k];
			 Ping[k]=n;
		}	
	}
	for(int l=1;l<9;l++)
	sum+=Ping[l];
	cout<<sum/8<<endl;
	return 0;
}
