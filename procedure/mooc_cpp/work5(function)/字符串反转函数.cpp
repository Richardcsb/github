#include<iostream>
#include<cstring>
using namespace std;
void Yes(char a[])
{
	int len;
	char temp;
	len=strlen(a);
	for(int i=0;i<len/2;i++)
	{
		temp = a[i];
        a[i] = a[len-1-i];
        a[len-1-i] = temp; 
	}
	return;
}
int main()
{
	char a[100];
	cin.getline(a,100);
	Yes(a); 
	cout<<a<<endl;
	return 0;
}
