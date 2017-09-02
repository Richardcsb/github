/*有A B C三个塔将A塔上的盘子移动到C并且保证始终是大盘在下小盘在上*/
#include<iostream>
using namespace std;
int i=0;
void hanor(int n,char one,char two,char three)
{
        if(n==1){
                cout<<one<<"-"<<three<<endl;
                i++;
                return;
        }
        else{
                /*将n-1个盘子从A移动到B*/
                hanor(n-1,one,three,two);
                /*将第n个盘子从A移到C*/
                cout<<one<<"-"<<three<<endl;
                i++;
                hanor(n-1,two,one,three);
        }
}
int main()
{
        int n;
        cin>>n;
        hanor(n,'A','B','C');
        return 0;
}

