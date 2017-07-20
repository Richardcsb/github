#include<iostream>
using namespace std;
int Calculate(char a[])
{
	int n=0,i=0;
	while(a[i]!='\0'){
		if((a[i]>90&&a[i]<97)
		      ||(a[i]<65||a[i]>122)){
			if(i>0&&((a[i-1]>90&&a[i-1]<97)
		      		||(a[i-1]<65||a[i-1]>122)));
		    else
		    	n++;
		}
		i++;
	}
	return n;
}
int main()
{
	char str[500];
	cin.getline(str,500);
	Calculate(str);
	cout<<Calculate(str)<<endl;
	return 0;
}
