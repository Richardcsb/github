#include<iostream>
using namespace std;
int main()
{
	int n,i=0;
	char str1[20];
	char str2[20]; 
	cin>>str1;
	while(str1[i]!='\0')
	{
		if(str1[i]>='a'&&str1[i]<='z')
		str2[i]=(str1[i]+3-'a')%26+'a'-32;
		if(str1[i]>='A'&&str1[i]<='Z')
		str2[i]=(str1[i]+3-'A')%26+'A'+32;
		i++;
	}
    str2[i]='\0';
	cout<<str2<<endl;
	return 0;
}
