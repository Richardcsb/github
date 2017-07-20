#include<iostream>
using namespace std;
void Hanoi(int n,char A,char B,char C)
{
	if(n==1){
		cout<<A<<"->"<<C<<endl;
		return ;
	}
	Hanoi(n-1,A,C,B);
	cout<<A<<"->"<<C<<endl;
	Hanoi(n-1,B,A,C);
	return;
}
int main()
{
	int n;
	cin>>n;
	Hanoi(n,'A','B','C');
	return 0;
}
