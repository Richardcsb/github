#include<stdio.h>
#define n 2
int main()
{
  int a,b,c,d,e;
  for(a=0;a<n;a++)
  {
    for(b=0;b<n;b++)
    {
      for(c=0;c<n;c++)
      {
        for(d=0;d<n;d++)
        {
          for(e=0;e<n;e++)
          {
            printf("%d%d%d%d%d\n",a,b,c,d,e);
          }
        }
      }
    }
  }
  return 0;
}
