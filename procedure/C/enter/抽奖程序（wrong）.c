#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
void gotoxy(int x,int y)
{
	COORD pos;
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
int main()
{
    int a,b,c,d,e;
    int v,i,n;
    int ai,bi,ci,di,ei;
    printf("please enter the scope\n");
    exit:
    scanf("%d",&n);
    ai=n/10000;n=n-ai*10000;
    bi=n/1000;n=n-bi*1000;
    ci=n/100;n=n-ci*100;
    di=n/10;n=n-di*10;
    ei=n;
    if(ai==0)
    {
    	printf("the number is wrong!\nplease enter a new scope\n");
    	goto exit;
    }
    system("cls");
    srand(time(0)); 
	 Show:
    system("color 0C");
    while(1)
    {
      a=rand()%(ai+1);
      for(i=1;a==0;i++)
      a=(rand()*(1+i))%(ai+1);
      b=(rand()*2)%(bi+1);
      c=(rand()*3)%(ci+1);
      d=(rand()*5)%(di+1);
      e=(rand()*9)%(ei+1);
      gotoxy(35,10);
      printf("%d%d%d%d%d",a,b,c,d,e);
      if(kbhit())
      {
      	v=getch();
      if(v==' ')
      break;
      }
    }
    while(1)
    {
   	if(kbhit())
    {
   	v=getch();
    if(v==' ')
    goto Show;
    }
    }
	return 0;
}
