#include<iostream>
using namespace std;

/*
��̬�����ڴ���ͷ�
double *p;
p = new double;
*p = 100.0;
��double *p = new double(100.0);

��̬�������飺
ָ����� = new ���͡�Ԫ�ظ�����
������̬�������80���ַ�������:
char *str��
str = new char[80];

��̬�������n��Ԫ�ص�һά�������飺
int n,*p;
cin>>n;
p = new int [n];
if(p == NULL){
  cout<<"�ռ�����ʧ��"<<endl;
else
  ........
}

delete������ͷ��ڴ�ռ䣺
1.�������� delete ָ�������
2.����     delete [] ָ�������
*/
int main()
{
  int m,n;
  cin>>m>>n;

  int **p = new int*[m];//�����С�
  for(int i=0;i<m;i++)
    p[i] = new int[n];//������ 

  //������Ԫ�ظ�ֵ 
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
