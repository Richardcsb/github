/*如果采用采用单纯的递归会导致大量的重复计算时间按复杂度为2^n次方，
这里的动态规划即采用记忆递归即，已经计算过的的MaxSum(i,j)将会被被保存下来避免重复计算
这里用负一表示没有计算过的MaxSum(i,j)*/
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
//递归转成递推
/*#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 101
int n;
int D[MAX][MAX];
int maxsum[MAX][MAX];
int main()
{
	int i,j;
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=i;j++)
		{
			cin>>D[i][j];
		}
	for(int i = 1;i <= n;++i)//将最后一行赋值给maxsum[n][i]
		maxsum[n][i] = D[n][i];
	for(int i = n-1;i >= 1;--i)//从底下算起递推最大值
		for(int j = 1;j <= i;++j)
			maxsum[i][j] = max(maxsum[i+1][j],maxsum[i+1][j+1])+D[i][j];
	cout<<maxsum[1][1]<<endl;
}
空间上的优化
#include<iostream>
#include<algonthm>
using namespace std;
#define MAX 101
int n;
int *maxSum;
int main()
{
	int i,j;
	cin>>n;
	for(i = 1;i <= n;i++)
		for(j = 1;j <= i;j++)
			cin>>D[i][j];
	maxSum = D[n];	//maxSum指向第n行
	for(int i = n-1;i >= 1;--i)
	for(int j = 1;j <= i;++j)
		maxSum[j] = max(maxSum[j],maxSum[j+1])+D[i][j];
	cout<<maxSum[1]<<endl;
}*/