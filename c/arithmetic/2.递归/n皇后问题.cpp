#include<iostream>
#include<cstdio>
using namespace std;
int N;
int queenPos[100];
void queen(int k)
{
    int i;
    if(k == N){
        for(i = 0;i < N;i++)
            cout<<queenPos[i] + 1<<" ";
        cout<<endl;
        return;
    }
    for(i = 0;i < N;i++){
        int j;
        for(j = 0;j < k;j++){
            if(queenPos[j] == i || abs(queenPos[j] - i) == abs(k - j))
                break;
        }
        if(j == k){
            queenPos[k] = i;
            queen(k+1);
        }
    }
}
int main()
{
    cin>>N;
    queen(0);
    return 0;
}