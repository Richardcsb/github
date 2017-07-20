#include<iostream>
#include<stdlib.h>
using namespace std;
void trans(int n)
{
	int i=0;
	int a[8];
    while(1){
    	a[i]=n%2;
    	n=n/2;
    	i++;
    	if(n==0) break;
	}
    n=i;
//    cout<<"("<<n<<")"; 
	while(8-n){
		cout<<"0";
		n++; 
	}
	for(int k=i-1;k>=0;k--){
		cout<<a[k];
	} 
	return;
}
int main()
{
	char a[20];
	int b[4];
	int j = 1;
	int i = 0;
	cin>>a;
	//将字符串中数字转换成数字 
	b[0] = atoi(a);              //遇到非数字字符则停止转换 
	while(1){
		if(a[i] == '.'){
			b[j] = atoi(a+i+1);
			j++;
			if(j>3) break;
		}
		i++;
	}
	//合法性检验
	for(int i=0;i<4;i++){
		if(b[i]>255||b[i]<0){
			cout<<"data error"<<endl;
			return 0;
		}
	} 
	for(int i=0;i<4;i++){
		trans(b[i]);
	} 
	return 0;
}
