#include<stdio.h>
int main()
{
	char c;
	for(;c=getchar()!='\n';){
		printf("%c,%d\n",c,c);
	}
	return 0;
}
