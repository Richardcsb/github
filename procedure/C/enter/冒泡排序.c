#include<stdio.h>
#define pp printf("if it cant,,")
int main()
{
  int i,j,n,m=0;
  int a[10];
  printf("please enter the number.\n");
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
    if(i==9)
    printf("that is all!\n");
  }
  for(i=1;i<10;i++)
  {
    for(j=9;j>=i;j--)
    {
      if(a[j]>a[j-1])
      {
        n=a[j];
        a[j]=a[j-1];
        a[j-1]=n;
      }
    }
  }
  for(i=0;i<=9;i++)
  {
    m=m+a[i];
  }
  for(i=0;i<10;i++)
  {
    printf("%d\t",a[i]);
  }
  printf("\n");
  printf("%d",m);
}
