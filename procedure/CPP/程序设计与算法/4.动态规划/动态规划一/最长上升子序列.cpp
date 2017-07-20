#include<iostream>
#include<string> 
#include<algorithm>
using namespace std;
const int MAXT=1010;
int a[MAXT];
int maxLen[MAXT];
int main()
{
	int N;
	cin>>N;
	for(int i=1;i<=N;++i)
	{
		cin>>a[i];
		maxLen[i]=1;
	}
	for(int i=2;i<=N;++i)
		for(int j=0;j<i;++j)
		{
			if(a[i]>a[j])
				maxLen[i]=max(maxLen[i],maxLen[j]+1);
		}
	cout<<* max_element(maxLen+1,maxLen+N+1); 
	return 0;
}
