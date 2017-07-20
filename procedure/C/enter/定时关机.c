#include<stdio.h>
int main()
{
	int x,y;
	char str[30];
	system("mode con cols=24 lines=2");
	system("title 定时关机");
	system("color 0b");
	printf("多少分钟后关机:");
	scanf("%d",&x);
	y=60*x;
	sprintf(str,"shutdown -s -t %d",y);
	system(str);
	system("pause");
	return 0;
}
