#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int i,j;
    int a[10];
    cout<<"为数组元素赋值:"<<endl;
    for(i=0;i<10;i++)
        cin>>a[i];

    for(i=0;i<10;i++){          //将每轮交换后的结果依次放入a[i]中
        for(j=9;j>=i;j--){     
            if(a[j]<a[j-1]){    //从最后一个数开始如果后一个数比前一个数搭则交换
                swap(a[j],a[j-1]);
            }
        }
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