#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 10
struct Score         /*定义结构体类型struct Score*/
{float math;         /*数学成绩*/
 float English;      /*英语成绩*/
 float Cprogram;    /*c程成绩*/
};
struct Student      /*定义结构体类型sruct Student*/
{char major[20];     /*专业*/
 char grade[10];     /*年级*/
 int  Class;          /*班级*/
 char number[10];    /*学号*/
 char name[20];      /*姓名*/
 char sex;           /*性别*/
 struct Score score; /*成绩（struct Score类型）*/
} stu[N];
int main()
{
void shuru();
void modify();
void Delete();
void query();
int num;             /*定义num以储存用户选择服务的编号*/
printf("                         学生成绩管理系统\n");          /*主菜单*/
printf("-----------------------------------------------------------------\n");
printf("1.录入学生信息\n");
printf("2.修改学生信息\n");
printf("3.删除学生信息\n");
printf("4.查询学生信息\n");
printf("5.退出系统\n");
printf("-----------------------------------------------------------------\n");
printf("                         选择你要的服务（请输入编号）：");
scanf("%d",&num);
switch(num)                                     /*由编号决定调用的函数*/
{case 1: shuru();break;
 case 2: modify();break;
 case 3: Delete();break;
 case 4: query();break;
 case 5: printf("感谢使用！\n");break;
 default: printf("服务编号输入错误\n");break;
}
return 0;
}
void shuru()                 //信息输入函数
{void save();
 struct Student stu[N];
 int k;
 for(k=0;k<N;k++) //输入N个学生的数据，存放在数组stu中
 {printf("请输入学生的专业:");
  scanf("%s\n",stu[k].major);
  printf("请输入学生的年级:");
  scanf("%s\n",stu[k].grade);
  printf("请输入学生的班级:");
  scanf("%d\n",stu[k].Class);
  printf("请输入学生学号:");
  scanf("%s\n",stu[k].number);
  printf("请输入学生姓名:");
  scanf("%s\n",stu[k].name);
  printf("请输入学生性别:");
  scanf("%c\n",stu[k].sex);
  printf("请输入数学成绩:");
  scanf("%f\n",stu[k].score.math);
  printf("请输入英语成绩:");
  scanf("%f\n",stu[k].score.English);
  printf("请输入C程成绩:") ;
  scanf("%f\n",stu[k].score.Cprogram);
 }
  save();
  printf("添加信息成功\n");

}
void save()
{FILE *fp;
 int i,flag=1;
 char m;
 system("cls");
 printf("                          已经转到保存成绩菜单\n");
 puts("是否保存学生成绩(y/n)");
 scanf("%s",&m);
 if(m=='y')
 { if((fp=fopen("score.dat","wb"))==NULL)
 { printf("文件打开失败\n");
   return;
 }
 for(i=0;i<N;i++)
  if(fwrite(&stu[i],sizeof(struct Student),1,fp)!=1)
  { printf("保存失败\n");
    flag=0;
  }
 if(flag==1)
   printf("保存成功!\n");
   fclose(fp);
 }
else
    return;
}
void modify()
{
int i,m=0;
char b,a;
struct Student *p;
printf("请输入要修改学生的学号：\n");
scanf("%s",&a);
for(i=0;i<N;i++)        //查找并输出需要修改的学生的原始信息
{if(strcmp(&a,stu[i].number)==0)
{printf("该学生信息为：\n专业：%s\t年级：%s\t班级：%d\t学号：%d\t姓名：%s\t性别：%c\t",stu[i].major,stu[i].grade,stu[i].Class,stu[i].number,stu[i].name,stu[i].sex);
 printf("数学成绩：%f\t英语成绩：%f\tC程序成绩：%f\n",stu[i].score.math,stu[i].score.English,stu[i].score.Cprogram);
 m=1;
}
if(m==1) break;
}
if(m==0) printf("请确认该学生是否为本校学生！\n");
else
{p=&stu[i];
 printf("是否要修改学生专业？（请输入y或n，其中y代表“是”，n代表“否”）\n");//修改学生专业
 scanf("%c",&b);
 if(b=='y')
 {printf("请输入正确的学生专业：");
  scanf("%s",p->major);
  printf("修改成功\n");
 }
  printf("是否要修改学生年级？（请输入y或n，其中y代表“是”，n代表“否”）\n");//修改学生年级
  scanf("%c",&b);
  if(b=='y')
  {printf("请输入正确的学生年级：");
   scanf("%s",p->grade);
   printf("修改成功\n");
  }
  printf("是否要修改学生班级？（请输入y或n，其中y代表“是”，n代表“否”）\n");//修改学生班级
  scanf("%c",&b);
  if(b=='y')
  {printf("请输入正确的学生班级：");
   scanf("%d",p->Class);
   printf("修改成功\n");
  }
  printf("是否要修改学生姓名？（请输入y或n，其中y代表“是”，n代表“否”）\n");//修改学生姓名
  scanf("%c",&b);
  if(b=='y')
  {printf("请输入正确的学生姓名：");
   scanf("%s",p->name);
   printf("修改成功\n");
  }
  printf("是否要修改学生性别？（请输入y或n，其中y代表“是”，n代表“否”）\n");//修改学生性别
  scanf("%c",&b);
  if(b=='y')
  {printf("请输入正确的学生性别：");
   scanf("%c",p->sex);
   printf("修改成功\n");
  }
  printf("是否要修改学生数学成绩？（请输入y或n，其中y代表“是”，n代表“否”）\n");//修改学生数学成绩
  scanf("%c",&b);
  if(b=='y')
  {printf("请输入正确的学生数学成绩：");
   scanf("%f",p->score.math);
   printf("修改成功\n");
  }
  printf("是否要修改学生英语成绩？（请输入y或n，其中y代表“是”，n代表“否”）\n");//修改学生英语成绩
  scanf("%c",&b);
  if(b=='y')
  {printf("请输入正确的学生英语成绩：");
   scanf("%f",p->score.English);
   printf("修改成功\n");
  }
  printf("是否要修改学生c程成绩？（请输入y或n，其中y代表“是”，n代表“否”）\n");//修改学生c程成绩
  scanf("%c",&b);
  if(b=='y')
  {printf("请输入正确的学生c程成绩：");
   scanf("%f",p->score.English);
   printf("修改成功\n");
  }
  save();
}
}
void Delete()           //删除函数
{   int search_(char *youwant);
	char num[10];
	int m=0,i;
	printf("请输入您要删除的学生学号:");
	scanf("%s",num);
	for (i=0;i<N;i++)
	   if(strcmp(num,stu[i].number)==0) m=1;
    if(m==0)
    printf("没有此学生信息!\n");
    else
	{int i,m;
	 m=search_(num);
	 for(i=m;i+1<N;i++)
		 stu[i]=stu[i+1];
	       //此处N为常量，值变不了，不知道该怎么弄
     save();
     printf("删除完毕!\n");
	}
}
int search_(char *youwant)
  {
	int M,i;
	for(i=0;i<N;i++)
	{
		if(!strcmp(youwant,stu[i].number))
		   M=i;
	}
	return M;
  }
void calculate()
{
 struct Student *p=stu;
 int i;
 int fail=0;
 int perfect=0;
 float sum1=0,sum2=0,sum3=0;
 for(i=0;i<N;i++,p++)    /*计算数学不及格的人数及总分*/
 {sum1=sum1+p->score.math;
  if(p->score.math<60)
   fail++;
 }
 printf("数学不及格的人数：%d\n",fail);
 fail=0;
 p=stu;
 for(i=0;i<N;i++,p++)    /*计算英语不及格的人数及总分*/
 {sum2=sum2+p->score.English;
  if(p->score.English<60)
   fail++;
 }
 printf("英语不及格的人数：%d\n",fail);
 fail=0;
 p=stu;
 for(i=0;i<N;i++,p++)    /*计算c程不及格的人数及总分*/
 {sum3=sum3+p->score.Cprogram;
  if(p->score.Cprogram<60)
   fail++;
 }
 printf("c程不及格的人数：%d\n",fail);
 p=stu;
 for(i=0;i<N;i++,p++)    /*计算数学优秀的人数*/
 {
  if(p->score.math>90)
    perfect++;
 }
 printf("数学优秀的人数：%d\n", perfect);
 perfect=0;
 p=stu;
 for(i=0;i<N;i++)    /*计算英语优秀的人数*/
 {
  if(p->score.English>90)
   perfect++;
 }
 printf("英语优秀的人数：%d\n", perfect);
 perfect=0;
 p=stu;
 for(i=0;i<N;i++)    /*计算c程优秀的人数*/
 {
  if(p->score.Cprogram>90)
    perfect++;
 }
 printf("c程优秀的人数：%d\n", perfect);
 printf("数学平均分：%f,英语平均分：%f,c程平均分：%f\n",sum1/N,sum2/N,sum3/N);
}
void search()
{  void search_rank(int M,char *rank);
   int m;
   char rank[3];
   char yourwant[10];
   printf("请输入要查询学生的学号：");
   scanf("%s",yourwant);
   m=search_(yourwant);              //根据输入的学号找出他是数据列表中的第几个学生
   search_rank(m,rank);                     //根据是第几个学生进行排名计算，将等级rank存在rank数组中
   printf("您要查询的学生的信息是：\n");
   printf("			专业：%s\n",stu[N].major);
   printf("			年级：%s\n",stu[N].grade);
   printf("         班级：%d\n",stu[N].Class);
   printf("			姓名：%s\n",stu[N].name);
   printf("			性别：%s\n",stu[N].sex);
   printf("			数学成绩：%.2f	等级是：%c\n",stu[N].score.math,rank[0]);
   printf("			英语成绩：%.2f	等级是：%c\n",stu[N].score.English,rank[1]);
   printf("			c程成绩：%.2f	等级是：%c\n",stu[N].score.Cprogram,rank[2]);

}

  void search_rank(int M,char *rank)
  {int i=0,count=0;
	for(;i<N;i++)//计算数学等级
		if(i!=M)
		{if(stu[i].score.math>stu[M].score.math)
			count++;
		}
	if(count/(N*1.0)<0.1)
			  rank[0] = 'A';
	else if(count/(N*1.0)<0.3&&count/(N*1.0)>=0.1)
              rank[0] = 'B';
	else if(count/(N*1.0)<0.6&&count/(N*1.0)>=0.3)
			  rank[0] = 'C';
	else
              rank[0] = 'D';
	for(i=0,count=0;i<N;i++)//计算英语等级
		  if(i!=M)
		 {if(stu[i].score.English>stu[M].score.English)
					  count++;
		 }
	if(count/(N*1.0)<0.1)
			  rank[1] = 'A';
	else if(count/(N*1.0)<0.3&&count/(N*1.0)>=0.1)
              rank[1] = 'B';
	else if(count/(N*1.0)<0.6&&count/(N*1.0)>=0.3)
			  rank[1] = 'C';
	else
              rank[1] = 'D';
	for(i=0,count=0;i<N;i++)//计算c程等级
		if(i!=M)
		{if(stu[i].score.Cprogram>stu[M].score.Cprogram)
					 count++;
		}
	if(count/(N*1.0)<0.1)
			  rank[2] = 'A';
	else if(count/(N*1.0)<0.3&&count/(N*1.0)>=0.1)
              rank[2] = 'B';
	else if(count/(N*1.0)<0.6&&count/(N*1.0)>=0.3)
			  rank[2] = 'C';
	else
              rank[2] = 'D';
  }
void query()
{void calculate();
 void dummy6();
 int num;
 printf("                               查询\n");
 printf("-----------------------------------------------------------------\n");
 printf("1.总体信息\n");
 printf("2.个人信息\n");
 printf("-----------------------------------------------------------------\n");
 printf("                                     选择你要的服务（请输入编号）：");
 scanf("%d",&num);
 switch(num)                                     /*由编号决定调用的函数*/
 {case 1: calculate();break;
  case 2: search();break;
  default: printf("服务编号输入错误\n");break;
 }
}
