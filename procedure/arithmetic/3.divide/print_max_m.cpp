#include<iostream>                 
    using namespace std;
    int a[10]={13,27,19,2,8,12,3,8,30,89};
    int b[10];
    void arrangeRight(int a[],int n)
    {
        if(long_a - i + 1))
            return ;
        i = 0;
        j = sizeof(a)/sizeof(int) - 1;
        while(i != j){
            while(i != j && a[j] >= k)
                --j;

            swap(a[i],a[j]);

            while(i != j && a[i] <= k)
                ++i;
            swap(a[i],a[j]);
        }
        if(n < (long_a - i + 1))
            arrangeRight(a,n);
        if(n > (long_a - i + 1))
            arrangeRight(a,n - (long_a - i + 1));
    }
    int main()
    {	
        int size=sizeof(a)/4;                     
        MergeSort(a,0,size-1,b);
        for(int i=0;i<size;++i)
            cout<<a[i]<<",";
        cout<<endl; 
        return 0;
    }
    
    
    