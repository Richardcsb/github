#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int a[10];
    int iTemp;
    int iPos;

    cout<<"为数组元素赋值:"<<endl;
    for(i=0;i<10;i++)
        cin>>a[i];

    for(i=1;i<10;i++){
        iTemp=a[i];
        iPos=i-1;
        while(iPos>=0 && iTemp<a[iPos]){
            a[iPos+1] = a[iPos];        //把前一个的值赋给后一个
            iPos--;                     //然后接着与前面的数对比
        }
        a[iPos+1] = iTemp;
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
