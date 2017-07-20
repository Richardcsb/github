#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
void map();
void die(int sum);
void move();
void gotoxy(int x, int y);
int fast;
int main( )
{
	system("title 贪吃蛇");
	system("mode con cols=48 lines=24");
	system("date /t");
	system("time /t");
	system("color 0a"); 
	printf("请选择难度,1为最难 1 2 3\n");
	scanf("%d",&fast);
	fast*=60;
	map();
	move();	
}
void map()//生成地图
{
	int i,j;
	system("cls");
	for (j=0;j<23;j++) 
	{
    	for (i=0;i<23;i++)
		{
        	if (i==0||j==0||i==22||j==22)
			{
 				gotoxy(i*2,j);
	    		printf("■");
		 	}
		    else
			{
	 	    	gotoxy(i*2,j);
		    	printf("  ");
 			}
		}
		printf("\n");
	}
}

void die(int sum)//碰墙蛇死 
{
	gotoxy(10,10);
	printf("the snake had die!");
	gotoxy(10,11);
	printf("the scrod is %d",sum*10);
    gotoxy(10,12);
    system("pause");
	exit(0);
}
void move()//蛇移动 
{
    int v,k,i,j;
	signed int x=2,y=0;
	int sum=1,move_x[200],move_y[200];
	
	move_x[0]=2;
	move_y[0]=11;
	gotoxy(move_x[0],move_y[0]);
	printf("■");
	
	srand(time(0));
	i=(int)rand()%21+1;
	j=(int)rand()%21+1;
	gotoxy(i*2,j);
	printf("★");
	
	while(1)
	{
		Sleep(fast);
		if(kbhit())
		{
			v=getch();
			if((v=='w'||v==72)&&(x!=0)){
				x=0;y=-1;
			}
			if((v=='s'||v==80)&&(x!=0)){
				x=0;y=1;
			}
			if((v=='a'||v==75)&&(y!=0)){
				x=-2;y=0;
			}
			if((v=='d'||v==77)&&(y!=0)){
				x=2;y=0;
			}
			if(v==' '){
			    gotoxy(50,12);
				system("pause");
				
			}
		}
		for(k=199;k>0;k--)
	    {
			move_x[k]=move_x[k-1];
			move_y[k]=move_y[k-1];
	    }
		move_x[0]+=x;
		move_y[0]+=y;
		if(move_x[0]==0||move_x[0]==44||move_y[0]==0||move_y[0]==22)
		die(sum);
		if((move_x[0]==i*2)&&(move_y[0]==j))
		{
			i=(int)rand()%21+1;
			j=(int)rand()%21+1;
			gotoxy(i*2,j);
			printf("★");
			sum+=1;
		}
		for(k=0;k<sum;k++)
		{
			gotoxy(move_x[k],move_y[k]);
			printf("■");
		}
		gotoxy(move_x[sum],move_y[sum]);
		printf("  ");
		
	}
}
void gotoxy(int x, int y)//gotoxy语句定位光标位置 
{
	COORD pos;
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
