#include<iostream>                    
using namespace std;
void swap(int &a,int &b);
void QuickSort(int a[],int s,int e);

int main()
{
    int i;
    int a[10];
    cout<<"为数组元素赋值:"<<endl;
    for(i=0;i<10;i++)
        cin>>a[i];
          
	QuickSort(a,0,9);
    
    for(i=0;i<10;i++){
        if(i==0)
            cout<<"排序后结果"<<endl;
        else   
            cout<<" ";
        cout<<a[i];
        if(i==9)    
            cout<<endl;
        
    }
    return 0;
}
void swap(int &a,int &b)       
{
	int temp = a;
	a = b;
	b = temp;
}
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