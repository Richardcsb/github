#include<iostream>                        //���Ӷ�Ϊo(n+mlogm) 
using namespace std;
void swap(int &a,int &b)              //����������õĲ�� ���β��иı���a,b��ֵʵ����Ҳ���Ÿı䣬�������򲻻�ı�ʵ�ε�ֵ 
{
	int tmp=a;
	a=b;
	b=tmp;
}
void arrangeRight(int a[],int s,int e,int k)
{
	if(s>=e)
		return;                       
	int key=a[s];
	int i=s,j=e;
	while(i!=j){
		while(j>i&&a[j]<=key)           
			--j;	
		swap(a[i],a[j]);
		while(i<j&&a[i]>=key)
			++i;
		swap(a[i],a[j]);
	}               
	QuickSort(a,s,i-1);
	QuickSort(a,i+1,e);

}
int a[]={93,27,30,2,8,12,2,8,30,89,55,78};
int main()
{
	int k=5;
	int size=sizeof(a)/4;
	arrangeRight(a,0,size-1,k);
	cout<<"tt"<<endl;
		for(int i=0;i<k;++i)
		cout<<a[i]<<",";
	cout<<endl;
	return 0;
}
