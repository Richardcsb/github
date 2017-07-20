#include<iostream>
#include<cmath> 
using namespace std;
#define EPS 1e-6
double a[5];
/*bool is_Zero(double x)
{
	return fabs(x)<=EPS;
}*/
bool count_24(double a[],int n)
{
	if(n==1){
		if(/*is_Zero(a[0]-24)*/a[0]-24==0)
			return true;
		else
			return false;
	}
	double b[5];
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++){
			int m=0;
			for(int k=0;k<n;k++)
				if(k!=i&&k!=j)
					b[m++]=a[k];
					
			b[m]=a[i]+a[j];
			if(count_24(b,m+1))
				return true;
			
			b[m]=a[i]*a[j];
			if(count_24(b,m+1))
				return true;
				
			b[m]=a[i]-a[j];
			if(count_24(b,m+1))
				return true;
				
			b[m]=a[j]-a[i];
			if(count_24(b,m+1))
				return true;
			if(a[i]!=0){
				b[m]=a[i]/a[j];
				if(count_24(b,m+1))
					return true;
			}
			if(a[j]!=0){
				b[m]=a[j]/a[i];
				if(count_24(b,m+1))
					return true;
			}
		}
		return false;
}
int main()
{
	for(int i=0;i<4;i++){
		cin>>a[i];
	}
	if(count_24(a,4))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
