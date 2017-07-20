#include<iostream>                    //时间复杂度为o(n) 
using namespace std;
void swap(int &a,int &b)       
{
	int tmp=a;
	a=b;
	b=tmp;
}
void QuickSort(int a[],int s,int e)  //线性时间内完成 
{
	if(s>=e)
		return;                       //程序返回 
	int k=a[s];                       //将第一个值赋给k 
	int i=s,j=e;                      //定义两个指针i,j指向头和尾 
	while(i!=j){
		while(i<j&&a[j]>=k)           //从小到大排序 
			--j;	
		swap(a[i],a[j]);
		while(i<j&&a[i]<=k)
			++i;
		swap(a[i],a[j]);
	}                                //处理完后a[i]=a[j]=k 
	QuickSort(a,s,i-1);
	QuickSort(a,i+1,e);
}
int a[]={93,27,30,2,8,12,2,8,30,89,55,78};
int main()
{
	int size=sizeof(a)/4;            //sizeof计算数组a[]的长度 
	QuickSort(a,0,size-1);
	for(int i=0;i<size;++i)
		cout<<a[i]<<",";
	cout<<endl;
	return 0;
}
