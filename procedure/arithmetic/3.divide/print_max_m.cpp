#include<iostream>                 
using namespace std;
#define print cout<<"------"<<endl
int a[]={13,30,19,2,8,12,3,8,16,28};
int k;
int n = 10;
inline int swap(int & a,int & b)
{
    int tem = a;
    a = b;
    b = tem;
}
void arrangeRight(int a[],int k,int i,int j)
{
    int c;
    int s = i,e = j;
    int key = a[s];

    c = n - e;
    if (c == k)
        return;

    while(e != s){
        while(s != e && a[e] >= key)
            --e;
        swap(a[s],a[e]);

        while(s != e && a[s] <= key)
            ++s;
        swap(a[s],a[e]);
    }
    if(c>k)
        arrangeRight(a,k,e,j);
    else
        arrangeRight(a,k-e,0,e);
}
int main()
{	
    int j;
    cout<<"please enter the number which you want to print"<<endl;
    cin>>k;
    j = sizeof(a)/sizeof(int);
    arrangeRight(a,k,0,j-1);
    for(int i = 0;i < 10;i++){
        cout<<a[i]<<" "<<endl;
    }
    return 0;
}
    
    
    