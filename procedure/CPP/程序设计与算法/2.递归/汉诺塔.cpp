#include<iostream>
using namespace std;
int i=0;
void hanor(int n,char one,char two,char three)
{
	if(n==1){
		cout<<one<<"-"<<three<<endl;
		i++;
		return;
	}
	else{
		hanor(n-1,one,three,two);
		cout<<one<<"-"<<three<<endl;
		i++;
		hanor(n-1,two,one,three);
	}
}
int main()
{
	int n;
	cin>>n;
	hanor(n,'A','B','C');
	cout<<"经过了"<<i<<"移动"<<endl;
	return 0;
}
