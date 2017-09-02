#include<iostream>
using namespace std;
int stairs(int n)
{
        if(n<1)         return 0;
        if(n==1)        return 1;
        if(n==2)        return 2;
        return stairs(n-1)+stairs(n-2);
}
int main()
{
        int n;
        while(true){
		cout<<"enter the number of step"<<endl;
                cin>>n;
                cout<<n<<"级台阶有"<<stairs(n)<<"种走法"<<endl;
        }
        return 0;
}

