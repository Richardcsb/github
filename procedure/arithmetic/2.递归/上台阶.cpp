#include<iostream>
using namespace std;
int stairs(int n)
{
	if(n<1)		return 0;
	if(n==1)	return 1;
	if(n==2)	return 2;
	return stairs(n-1)+stairs(n-2);
}
int main()
{
	int n;
	while(true){
		cin>>n;
		cout<<"有"<<stairs(n)<<"种上台阶方法"<<endl;
	}
	return 0;
}
