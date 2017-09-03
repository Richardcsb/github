#include<iostream>
using namespace std;

/*
动态申请内存和释放
double *p;
p = new double;
*p = 100.0;
或double *p = new double(100.0);

动态申请数组：
指针变量 = new 类型【元素个数】
例：动态申请具有80个字符的数组:
char *str；
str = new char[80];

动态申请具有n个元素的一维整形数组：
int n,*p;
cin>>n;
p = new int [n];
if(p == NULL){
  cout<<"空间申请失败"<<endl;
else
  ........
}

delete运算符释放内存空间：
1.单个变量 delete 指针变量；
2.数组     delete [] 指针变量；
*/
int main()
{
  int m,n;
  cin>>m>>n;

  int **p = new int*[m];//开辟行
  for(int i=0;i<m;i++)
    p[i] = new int[n];//开辟列 

  //给数组元素赋值 
  for(int i = 0;i < m;i++)
    for(int j = 0;j < n;j++)
      cin>>p[i][j];

  int sum = 0;
  for(int i = 0;i < m;i++)
    for(int j = 0;j < n;j++)
      sum += p[i][j];

  cout<<sum<<endl;
  return 0;
}
