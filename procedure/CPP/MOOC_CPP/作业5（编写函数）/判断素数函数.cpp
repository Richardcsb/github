#include<iostream>
#include<cmath> 
using namespace std;
void Sushu(int a[])
{
	int n,m=0,i=0;
		show:
		while(a[i]!=0){
			n=a[i];
			i++;
			if(n<2)
				continue;
			else{
				for(int i=2;i<=n/2;i++)
			 		if(n%i==0)
						goto show;		
			if(m>0)
				cout<<" ";
			cout<<n;
			m++;
			}
		}

}
int main()
{
	int k=0,m=0,a[100];
	do{
		cin>>a[k];
		k++;
	}while(a[k-1]!=0);
	Sushu(a);
	return 0;
}
