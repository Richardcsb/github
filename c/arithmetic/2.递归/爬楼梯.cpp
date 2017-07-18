/*n级台阶,一次可以走一级或者两级*/
#include<iostream>
using namespace std;
int stairs(int n)
{
    if(n < 0)      //在return stairs(n-2)可能会产生负数
        return 0;
    if(n == 0)
        return 1;
    else
        return stairs(n-1) + stairs(n-2);
}
int main()
{
    int n;
    while(cin>>n && n >= 0){
        cout<<"方法数：";
        cout<<stairs(n)<<endl;
    }
    return 0;
}