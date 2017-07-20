#include<iostream>
using namespace std;
void Change(char a[])
{
	int i=0,k=0;
	while(a[i]!='\0'){
		if(a[i]==32||(a[i]>=65&&a[i]<=90)
		||(a[i]>=97&&a[i]<=122)){
			if(a[i]>=97&&a[i]<=122)
				a[i]=a[i]-32;
			a[k]=a[i];
			k++;
		}
		i++;
	}
	a[k]='\0';
}
int main()
{
	char str[200];
	cin.getline(str,200);
	Change(str);
	cout<<str<<endl;
	return 0;
}
