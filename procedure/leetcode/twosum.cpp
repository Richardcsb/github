#include <iostream>
#include <vector>
using namespace std;
vector<int> SumOfTow(vector<int>& str,int target){
    for(int i=0;i<str.size();i++){
        for(int j=i+1;j<str.size();j++){
            if(target == str[i]+str[j]){
                vector<int> sum(2);
                sum[0]=i;
                sum[1]=j;
                return sum;
            }
        }
    }
    vector<int> sum(2);
    return sum;
}
int main(){
    vector<int> array;
    array = {230,863,916,585,981,404,316,785,88,12,70,435,384,778,887,755,740,
            337,86,92,325,422,815,650,920,125,277,336,221,847,168,23,677,61,400,
            136,874,363,394,199,863,997,794,587,124,321,212,957,764,173,314,422,
            927,783,930,282,306,506,44,926,691,568,68,730,933,737,531,180,414,751,
            28,546,60,371,493,370,527,387,43,541,13,457,328,
            227,652,365,430,803,59,858,538,427,583,368,375,173,809,896,370,789};
    int target = 542;
    cout<<array.size()<<endl;
    vector<int> sum  = SumOfTow(array,target);
    for(int i=0;i<2;i++){
        cout<<sum[i]<<endl;
    }
    return 0;
}
