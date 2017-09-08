### 分治[divide](https://baike.baidu.com/item/%E5%88%86%E6%B2%BB%E6%B3%95)
**分治基本概念**	
把一个任务分成形式和原任务相同但是规模更小的几个部分的任务，一般是两个，分别完成或者只需要选择一部分来完成，然后再处理完成后的这一个或几个部分的结果，实现整个任务的完成。
### 分治基本案例
```
void Merge(int a[],int s,int m,int e,int tmp[])
{
    int pb=0;                       
    int p1=s,p2=m+1;               
    while(p1<=m&&p2<=e){ 
        if(a[p1]<a[p2])          
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
    if(s<e){                                 
        int m=s+(e-s)/2;
        MergeSort(a,s,m,tmp);                
        MergeSort(a,m+1,e,tmp);
        Merge(a,s,m,e,tmp);                   
    }
}
```
### 快速排序
```
void QuickSort(int a[],int s,int e)  
{
	if(s>=e)
		return;                       
	int k=a[s];                       
	int i=s,j=e;                      
	while(i!=j){
		while(i<j&&a[j]>=k)          
			--j;	
		swap(a[i],a[j]);
		while(i<j&&a[i]<=k)
			++i;
		swap(a[i],a[j]);
	}                                
	QuickSort(a,s,i-1);
	QuickSort(a,i+1,e);
}
```