#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int a=6;a<=n;++a)
		for(int b=2;b<a;++b)
			for(int c=b;c<a;++c)
				for(int d=c;d<a;++d)
					if(a*a*a==b*b*b+c*c*c+d*d*d)
						printf("%d=%d*%d*%d\n",a,b,c,d);
	return 0;
}
