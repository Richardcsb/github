#include<iostream>
using namespace std;
void print_space(char a[])
{
	int i=0;
	while(a[i]!='\0'){
		if(i!=0)
			cout<<" ";
		cout<<a[i];
		i++;
	}
	cout<<endl;
}
void print_space(string s)
{
	int i=0;
	while(s[i]!='\0'){
		if(i!=0)
		cout<<" ";
		cout<<s[i];
		i++;
	}
	cout<<endl;
}
int main()
{
	char s1[200];
	string s2;
	cin.getline(s1,200);
	cin>>s2;
	print_space(s1);
	print_space(s2);
}
