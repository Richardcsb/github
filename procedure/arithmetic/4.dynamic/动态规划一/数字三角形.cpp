#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 101
int n;
int D[MAX][MAX];
int maxsum[MAX][MAX];
int MaxSum(int i,int j)
{
	if(maxsum[i][j]!=-1)
		return maxsum[i][j];
	if(i==n)
		maxsum[i][j]=D[i][j];
	else
	{
		int x=MaxSum(i+1,j);
		int y=MaxSum(i+1,j+1);
		maxsum[i][j]=max(x,y)+D[i][j];
	}
	return maxsum[i][j];
}
int main()
{
	int i,j;
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=i;j++)
		{
			cin>>D[i][j];
			maxsum[i][j]=-1;
		}
	cout<<MaxSum(1,1)<<endl;
}

