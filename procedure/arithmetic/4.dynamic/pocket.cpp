/*将N个物品放入可装总重量为40的口袋*/
//递归做法
/*#include<iostream>
using namespace std;
int a[30];
int N;
int Ways(int w,int k){
    if(w == 0)
        return 1;
    if(w <= 0)
        return 0;
    return Ways(w,k-1) + Ways(w-a[k],k-1) //返回不取k种物品和取k种物品可能之和
}
int main()
{
    cin>>N;
    for(int i=1;i <= N;i++){
        cin>>a[i];
    }
    cout<<Ways(40,N);
    return 0;
}*/
//递推做法，动态规划
#include<iostream>
using namespace std;
int a[30];
int N;
int Ways[40][30];//表示从前j种物品里凑出体积i的方法数
int main()
{
    cin>>N;
    memset(Ways,0,sizeof(Ways));
    for(int i = 1;i <= N;i++){
        cin>>a[i];
        Ways[0][i] = 1;
    }
    Ways[0][0] = 1;
    for(int w = 1;w <= 40; ++w){
        for(int k = 1;k <= N; ++k){
            Way[w][k] = Ways[w][k-1];
            if(w-a[k] >= 0)
                Ways[w][k] += Ways[w-a[k]][k-1];
        }
    }
    cout<<Ways[40][N];
    return 0;
}
/*memset是计算机中C/C++语言函数。将s所指向的某一块内存中的前n个 
字节的内容全部设置为ch指定的ASCII值， 第一个值为指定的内存地址，
块的大小由第三个参数指定，这个函数通常为新申请的内存做初始化工作， 
其返回值为指向s的指针。*/