#include<iostream>
using namespace std;
void change(char *s)
{
	if(*s){                //if非零和非空（\0）为真 
		change(s+1);
		cout<<*s;
	}
	else{
		return;
	}
}
int main()
{
	char arr[100];
	cin.getline(arr,100);
	change(arr);
	return 0;
}
