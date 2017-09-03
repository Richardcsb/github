/*人的体力，情感，智商高峰日子分别每隔23天，28天，33天出现一次，输入四个整数:p，e，i和d。p，e，i分别表示体力，
情感和智力高峰出现的日子，d是给定日子，可能小于p，e，i所给定的日子是非负且小于365，求给定日子距离下一次三个高峰同一天的天数。*/
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int p,e,i,d;
	int k;
	cin>>p>>e>>i>>d;
	if(p<0||e<0||i<0||d<0)
		exit(0); 
	for(k=d+1;(k-p)%23;++k);//结束条件是(k-p)%23 == 0
	for(;(k-e)%28;k+=23);
	for(;(k-i)%33;k+=23*28);
	cout<<k-d<<endl;
	return 0; 
}
