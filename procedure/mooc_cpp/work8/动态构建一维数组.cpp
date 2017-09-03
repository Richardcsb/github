#include<iostream>
using namespace std;
/*
  指针函数返回值为指针 
  构造动态申请一维数组函数
*/ 
int *new_arry(int n)
{
	int *p = new int[n];
	return p;
 } 
void  init_array(int *p, int n,int c)
{
	for(int i = 0;i<n;i++){
		p[i] = c;
	}
	for(int i = 0;i<n;i++){
		if(i == 0)
			cout<<p[i];
		else
			cout<<" "<<p[i]; 
	}
}
int main()
{
	int n,c;
	int *p;
	cin>>n>>c;
	p = new_arry(n);
	init_array(p,n,c);
	delete [] p;
	return 0;
}
