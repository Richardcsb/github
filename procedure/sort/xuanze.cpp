#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int i,j;
    int a[10];
    int iTemp;
    int iPos;

    cout<<"为数组元素赋值:"<<endl;
    for(i=0;i<10;i++)
        cin>>a[i];

    for(i=0;i<9;i++){
        iTemp=a[i];
        iPos=i;
        for(j=i+1;j<10;j++){    //i=0时将第一个数与后面所以数做对比若找到比a[i]小的数则交换位置
            if(a[j]<iTemp)
            {                   //记录后面作对比的最小的数
                iTemp=a[j];
                iPos=j;
            }
        }
        swap(a[i],a[iPos]);
    }

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
