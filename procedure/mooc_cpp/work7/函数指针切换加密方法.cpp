#include<iostream>
using namespace std;
void cipher(void (*f) (char s[]),char s[])
{
	return (*f)(s);
}
void caeser(char a[])
{
	int i=0;
	while(a[i]!= '\0'){
		if(a[i]>='a'&&a[i]<='z')
			a[i]=(a[i]+3-'a')%26+'a'-32;
		else if(a[i]>='A'&&a[i]<='Z')
			a[i]=(a[i]+3-'A')%26+'A'+32;
		i++;
	}
}
void addeven(char s[])
{
	char a[20];
	int k;
	int n=0;
	for(k=0;s[k]!='\0';k++){
		a[k] = s[k];
	}
//	cout<<k<<endl;
	for(int i=0;i < k;i+=2){
		s[n] = a[i];
		n++;
	}
	for(int i = 1;i < k;i+=2){
		s[n] = a[i];
		n++;
	}
}
int main()
{
	char s[20];
	int n;
	cin>>s;
	cin>>n;
	switch(n){
		case 1:
			cipher(caeser,s);break;
		case 2:
		    cipher(addeven,s);
	}
	cout<<s<<endl;
	return 0;
}
