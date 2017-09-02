#include<iostream>                 //时间复杂度为o(n*logn） 
using namespace std;
int a[10]={13,27,19,2,8,12,3,8,30,89};
int b[10];
void Merge(int a[],int s,int m,int e,int tmp[])
{
	int pb=0;                       //tem函数 
	int p1=s,p2=m+1;               //定义两个头指针 
	while(p1<=m&&p2<=e){ 
		if(a[p1]<a[p2])           //从小到大排序 
			tmp[pb++]=a[p1++];
		else
			tmp[pb++]=a[p2++];
	}
	while(p1<=m)
		tmp[pb++]=a[p1++];
	while(p2<=e)
		tmp[pb++]=a[p2++];
	for(int i=0;i<e-s+1;++i)
			a[s+i]=tmp[i];
}
void MergeSort(int a[],int s,int e,int tmp[])
{
	if(s<e){                                 //归并 
		int m=s+(e-s)/2;
		MergeSort(a,s,m,tmp);                
		MergeSort(a,m+1,e,tmp);
		Merge(a,s,m,e,tmp);                    //将前两个函数合并起来 
	}
}
int main()
{	
	int size=sizeof(a)/4;                    //sizeof得到a的长度为40 
	MergeSort(a,0,size-1,b);
	for(int i=0;i<size;++i)
		cout<<a[i]<<",";
	cout<<endl; 
	return 0;
}


