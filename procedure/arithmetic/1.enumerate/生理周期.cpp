#include<iostream>
using namespace std;
int main()
{
	int p,e,i,d;//体力，情商，智商，高峰和给定日子 
	int k;
	cin>>p>>e>>i>>d;
	if(p<0||e<0||i<0||d<0)
		exit(0); 
	for(k=d+1;(k-p)%23;++k);//for(k=d+1;(k-p)%23!=0;++k)找出满足体力高峰的第一个k后循环结束 
	for(;(k-e)%28;k+=23);
	for(;(k-i)%33;k+=23*28);
	cout<<k-d<<endl;
	return 0; 
}
