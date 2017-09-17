#include<iostream>
using namespace std;
void swap(int &a,int &b);
void CelerityRun(int left,int right,int array[]);
int main()
{
    int i;
    int a[10];
    cout<<"为数组元素赋值:"<<endl;
    for(i=0;i<10;i++)
        cin>>a[i];

    CelerityRun(0,9,a);

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

void CelerityRun(int left,int right,int array[])
{
    int i,j;
    int middle;
    i = left;
    j = right;
    middle = array[(left+right)/2];
    do{ //第一次折半排序后大于middle的在右边小于middle的在左边
        while((array[i]<middle) && i<right)
            i++;    //比middle小则i++,比middle大则等待与右边比middle小的数交换
        while((array[j]>middle) && j>left)
            j--;
        if(i<=j)
        {
            swap(array[i],array[j]);
            i++;
            j--;
        }
    }while(i<=j);

    if(left<j)
        CelerityRun(left,j,array);
    if(right>i)
        CelerityRun(i,right,array);
}
void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}