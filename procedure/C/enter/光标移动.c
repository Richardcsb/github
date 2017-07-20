#include<stdio.h>
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
  system("color 0C");
  gotoxy(40,12);
  printf("hello world");
  return 0;
}
