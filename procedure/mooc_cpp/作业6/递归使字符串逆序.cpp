#include<iostream>
using namespace std;
void change(char *s)
{
	if(*s){                //if����ͷǿգ�\0��Ϊ�� 
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
