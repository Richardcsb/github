#include<iostream>                    //ʱ�临�Ӷ�Ϊo(n) 
using namespace std;
void swap(int &a,int &b)       
{
	int tmp=a;
	a=b;
	b=tmp;
}
void QuickSort(int a[],int s,int e)  //����ʱ������� 
{
	if(s>=e)
		return;                       //���򷵻� 
	int k=a[s];                       //����һ��ֵ����k 
	int i=s,j=e;                      //��������ָ��i,jָ��ͷ��β 
	while(i!=j){
		while(i<j&&a[j]>=k)           //��С�������� 
			--j;	
		swap(a[i],a[j]);
		while(i<j&&a[i]<=k)
			++i;
		swap(a[i],a[j]);
	}                                //�������a[i]=a[j]=k 
	QuickSort(a,s,i-1);
	QuickSort(a,i+1,e);
}
int a[]={93,27,30,2,8,12,2,8,30,89,55,78};
int main()
{
	int size=sizeof(a)/4;            //sizeof��������a[]�ĳ��� 
	QuickSort(a,0,size-1);
	for(int i=0;i<size;++i)
		cout<<a[i]<<",";
	cout<<endl;
	return 0;
}
