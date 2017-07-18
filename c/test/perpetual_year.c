#include<stdio.h>
int main()
{
	int w,c,y1,y2,y,m,d,G,H,J,i,num_month;
	
	printf("please enter the date,such as 2016,09,30\n");
	scanf("%d,%d,%d",&y1,&m,&d);
	y2=y1;
	
	if(m==1) m=13,y1=y1-1;
	if(m==2) m=14,y1=y1-1;
	
	c=y1/100;
	y=y1-100*c;
	G=c/4;
	H=y/4;J=13*(m+1)/5;
	
	w=(G-2*c+y+H+J)%7;
	switch(m)
    {
		 case 13:case 3:case 5:case 7:case 8:case 10:case 12:
		     num_month=31;
			 break;
		 case 4:case 6:case 9:case 11:
		     num_month=30;
			 break;
	     case 14:
		 if(y2%4==0&&y2%100!=0||y2%400==0)
             num_month=29;
	     else 
		     num_month=28;
		 	 break;
   } 
   printf("\nSun\tMon\t Tues\tWed\tThur\tFri\tSat\n");
   for(i=1;i<=w;i++)
		printf("\t");
   for(i=1;i<=num_month;i++)
		{
		printf("%2d\t",i);
		if((G-2*c+y+H+J+i-1)%7==6)
		printf("\n");
	    }
	    printf("\n");
	    // system("pause");
}