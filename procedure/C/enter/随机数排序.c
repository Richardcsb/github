#include<stdio.h>
#include<time.h>
int main()
{
	int temp,temp1;
	int a[40];
	int i,j,k;
	srand(time(0));
	printf("40λ��������Ϊ:\n");
	for(i=0;i<40;i++)
	{
		temp=a[i]=rand()%100+1;
		printf("%4d",temp);
	}
	for(j=0;j<40;j++)
	{
		for(k=39;k>=j;k--)
		{
			if(a[k]<a[k-1])
			{
				temp1=a[k-1];
				a[k-1]=a[k];
				a[k]=temp1;
			}
		}
	}
	printf("\n");
	printf("������������Ϊ:\n");
	for(i=0;i<40;i++)
	{
	    printf("%4d",a[i]);
	}
	system("pause");
	return 0;

}
