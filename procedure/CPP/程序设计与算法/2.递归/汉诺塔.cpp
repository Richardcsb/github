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
	cout<<"������"<<i<<"�ƶ�"<<endl;
	return 0;
}
