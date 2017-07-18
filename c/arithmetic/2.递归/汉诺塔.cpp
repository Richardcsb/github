/*古代有一个梵塔，塔内有A,B,C A座上有n个盘子，盘子大小不等，大的在下，小的在上，有一个和尚想把这n个盘子从A移到C
每次只能移动一个盘子，并且移动过程中3个座上的盘子始终保持大的在下小的在上，要求输出移动步骤*/
#include<iostream>
using namespace std;
void hannoi(int n,char src,char mid ,char dest)
{
    if(n == 1){
        cout<<src<<"--"<<dest<<endl;
        return ;
    }
    hannoi(n-1,src,dest,mid);//先将n-1个盘子从src移到mid
        cout<<src<<"--"<<dest<<endl;
    hannoi(n-1,mid,src,dest);//然后将n-1个盘子从mid移到dest
        return ;
}
int main()
{
    int n;
    cin>>n;
    hannoi(n,'A','B','C');
    return 0;
}