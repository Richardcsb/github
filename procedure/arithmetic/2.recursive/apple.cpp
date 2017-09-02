/*把M个相同的苹果放在N个同样的盆子里，允许有空的盆子不放，求放置方法数*/

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
	/*当盘子数小于苹果数时，总放法=有盘子为空+没盘子为空*/
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
