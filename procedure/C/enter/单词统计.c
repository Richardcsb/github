#include<stdio.h>
#include<process.h>
#include<ctype.h>
#define M 1000
#define N 20
char str1[M][N];
char str2[M];
int strC[M];
int i=0;
int main()
{
	char ch;
	menu();
	scanf("%c",&ch);
	while(ch)
	{
		switch(ch)
		{
			case 'a':
			calculate();
			break;
			case 'b':
			save();
			break;
			case 'c':
			open();
			break;
		}
		getch();
		menu();
		scanf("%c",&ch);
		
	}
}
int menu()
{
	system("cls");
	printf("\n\n\n\n\n");
    printf("\t\t|-------------------MENU-------------------|\n");
    printf("\t\t|\ta.统计文章单词数                   |\n");
    printf("\t\t|\tb.保存结果到指定文件               |\n");
    printf("\t\t|\tc.显示输出结果                     |\n");
    printf("\t\t|------------------------------------------|\n");
    printf("\t\t\t输入你的选择："); 
}
int calculate()
{
	int a,b,iTemp,UNLL;
	char iTemp1;
    int j=0,k=0,t=0,x=0;
    
    FILE *fp;
    if((fp=fopen("E:\\123.txt","r"))==UNLL)
	{
		printf("无法打开该文件 !\n");
		exit(0);
	}
    fgets(str2,sizeof(str2),fp);
    printf("文章内容为：\n%s\n",str2);
    fclose(fp);
    t=strlen(str2);
    while(j<t)  
    {
    	for(;str2[j]==32||isalpha(str2[j])==0;j++);
        while(k<N&&str2[j]!=32&&isalpha(str2[j])!=0) 
        	str1[i][k++]=str2[j++];  
            strC[i]=1;
        for(x=0;x<i;x++)  
            if(strncmp(str1[i],str1[x],N)==0)
            {
                strC[x]++; 
                i--;        
                break; 
            }      
            i++;   
            k=0;
    }
	for(a=0;a<i;a++)
    {
    	for(b=i-1;b>a;b--)
    	{
	    	if(strC[b]>strC[b-1])
	    	{
	    		iTemp=strC[b-1];
	    		strC[b-1]=strC[b];
	    		strC[b]=iTemp;
	    		jh(str1[b],str1[b-1]);
	    	}
	    }
    }
    printf("计算后结果是:\n");  
    for(t=0;t<i;t++)
    printf("%d %s\n",strC[t],str1[t]);
}
int save()
{
	int t,UNLL;
	FILE *fp;
    if((fp=fopen("E:\\124.txt","w"))==UNLL)
	{
		printf("can not open !\n");
		exit(0);
	}
	for(t=0;t<i;t++)
	{
	    fprintf(fp,"%d",strC[t]);
		fputc(' ',fp);
		fputs(str1[t],fp);
		fputc('\n',fp);
	}
	fclose(fp);
	printf("保存成功！\n");
}
int open()
{
	char ch;
	int UNLL;
	FILE *fp;
	if((fp=fopen("E:\\124.txt","r"))==UNLL)
	{
		printf("can not open!\n");
		exit(0);
	}
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
	fclose(fp);
}
int jh(char *p1,char *p2)
{
	char *t;
	int i,L;
	L=strlen(p1);
	if(strlen(p2)>L)
	L=strlen(p2);
	t=(char*)malloc(sizeof(char)*L);
	strcpy(t,p1);strcpy(p1,p2);strcpy(p2,t);
}