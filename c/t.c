#include<stdio.h>
int swap(int *n,int *m);
int main()
{
    int i,j;
    int str[10];
    printf("Please enter ten number:\n");
    for(i=0;i<10;i++)
        scanf("%d",&str[i]);
    for(i=0;i<9;i++)
        for(j=i+1;j<10;j++)
        {
            if(str[i]>str[j]){
                swap(&str[i],&str[j]);
            }
        }
    for(i=0;i<10;i++)
        printf("%d ",str[i]);
    printf("\n");
}
int swap(int *n,int *m)
{
    int temp;
    temp = *n;
    *n = *m;
    *m = temp;
}