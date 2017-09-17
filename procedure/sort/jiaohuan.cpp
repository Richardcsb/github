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

    for(i=0;i<9;i++){          
        for(j=i+1;j<10;j++){     
            if(a[j]<a[i]){    //a[i]与其后所有值比，后面的数如果比a[i]小的则交换
                swap(a[j],a[i]);
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