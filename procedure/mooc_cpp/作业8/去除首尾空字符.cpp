#include<iostream>
using namespace std;
int main()
{
	char s[50];
	char *a,*b;
	cin.getline(s,50);
	a=s;
	while(1){
		if(*a == 32){//ÅÐ¶ÏÊÇ·ñÎª¿Õ 
			a++;
		}
		else
			break; 
	}
	int i=0;
	while(1){
		if(s[i]!='#')
			i++;
		else{
			b = &s[i];
			break;
		}
	}
	while(1){
		b--;
		if(*b != 32)
			break;
	}
	
	while(1){
		cout<<*a;
		if(a == b){
			cout<<"#"<<endl;
			break;
		}
		a++;
	}
	return 0;
}
