/*给出4个小于10的正整数，可以用加减乘除判断是否可以得出结果为24*/

#include<iostream>
#include<cmath>
using namespace std;
#define EPS 1e-6
double a[5];
//判断一个数是否为零的标准是是否小于ESP
/*bool is_Zero(double x)
{
        return fabs(x)<=EPS;
}*/
bool count_24(double a[],int n)
{
        if(n==1){
                if(/*is_Zero(a[0]-24)*/a[0]-24==0)
                        return true;
                else
                        return false;
        }

        double b[5];
        for(int i=0;i<n-1;i++)
                for(int j=i+1;j<n;j++){//枚举两个数的组合

                        int m=0;       //还剩m个数, m = n - 2
                        for(int k=0;k<n;k++){
                        //将其余数放入b
                                if(k != i && k != j)
                                        b[m++]=a[k];   //第一次四个数的时候b[0] = a[2],b[1] = a[3]
                        }

                        /*判断加减乘除四种情况*/
                        b[m]=a[i]+a[j];                //第一次循环 b[2] = a[0] + a[1]
                        if(count_24(b,m+1)){
				cout<<a[i]<<"+"<<a[j]<<endl;
                                return true;
			}

                        b[m]=a[i]*a[j];
                        if(count_24(b,m+1)){
			cout<<a[i]<<"*"<<a[j]<<endl;
                        return true;
			}

                b[m]=a[i]-a[j];
                if(count_24(b,m+1)){
			cout<<a[i]<<"-"<<a[j]<<endl;
                        return true;
		}
                b[m]=a[j]-a[i];
                if(count_24(b,m+1)){
			cout<<a[j]<<"-"<<a[i]<<endl;
                        return true;
		}


	                if(a[i]!=0){
                        b[m]=a[i]/a[j];
                        if(count_24(b,m+1)){
			cout<<a[i]<<"/"<<a[j]<<endl;
                                return true;
			}
                }

                if(a[j]!=0){
                        b[m]=a[j]/a[i];
                        if(count_24(b,m+1)){
			cout<<a[j]<<"/"<<a[i]<<endl;
                                return true;
			}
                }
        }
        return false;
}
int main()
{
        for(int i=0;i<4;i++){
                cin>>a[i];
        }
        if(count_24(a,4))
                cout<<"YES"<<endl;
        else
                cout<<"NO"<<endl;
        return 0;
}
