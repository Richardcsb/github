#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,k;
	char str1[120];
	char str2[6]="abcde";
	string text;               
	cin>>str1;
	cin>>n;         //当输入n等于1时程序正常运行，当输入n大于1时程序执行异常 
	text=str1;
	k=n+1;
    for(int i=0;str1[i]!='\0';i++)
    {
    	text.insert(n,str2,i%5,1); 
		n=n+k;        
	}
	cout<<text<<endl;
	return 0;
}
