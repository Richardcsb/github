/*输入四个整数：p,e,i,d分别是体力，情感和智力高峰出现的
日子d是给定的日子非负且小于等于365，所求日子小于21252
输出从给定日子起下一次三个高峰同一天的日子*/
#include<iostream>
#include<cstdio>
using namespace std;
#define N 2152
int main()
{
    int p,e,i,d,caseNo = 0;
    while(cin>>p>>e>>i>>d && p != -1){
        ++caseNo;
        int k;
        for(k = d+1;(k-p)%23 != 0; ++k);
        for(;(k-e)%28 != 0;k += 23);
        for( ; (k-i)%33 != 0;k += 23*28);
        cout<<"CAse:"<<caseNo<<":the next triple peak occurs in "<<k-d<<" days."<<endl;
    }
    return 0;
}