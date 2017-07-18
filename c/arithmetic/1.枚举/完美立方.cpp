/*形如a*a*a==b*b*b+c*c*c+d*d*d称为完美立方等式其中a,b,c,d大于1，
小于等于N，且b<=c<=d Cube = a,Triple = （b,c,d)*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int N;
    scanf("%d",&N);
        for(int a = 2;a <= N; ++a)
            for(int b = 2;b < a;++b)
                for(int c = b;c < a;++c)
                    for(int d = c;d < a;++d)
                        if(a*a*a == b*b*b + c*c*c + d*d*d)
                            printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);
    return 0;
}