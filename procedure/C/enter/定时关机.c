#include<stdio.h>
int main()
{
	int x,y;
	char str[30];
	system("mode con cols=24 lines=2");
	system("title ��ʱ�ػ�");
	system("color 0b");
	printf("���ٷ��Ӻ�ػ�:");
	scanf("%d",&x);
	y=60*x;
	sprintf(str,"shutdown -s -t %d",y);
	system(str);
	system("pause");
	return 0;
}
