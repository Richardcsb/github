#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
struct Music
{
	char name[50];
	char singer[20];
	int clickrate;	
} ;
struct Music music[5];
int main()
{
	for(int i=0;i<5;i++)
	{
		cin>>music[i].name;
		cin>>music[i].singer;
		cin>>music[i].clickrate;
	}
	for(int j=0;j<5;j++)
		for(int k=j;k<5;k++)
		{
			if(music[j].clickrate<music[k+1].clickrate)
			{
				swap(music[j].clickrate,music[k+1].clickrate);
				swap(music[j].name,music[k+1].name);
				swap(music[j].singer,music[k+1].singer);
			}
		}
	for(int i=0;i<5;i++)                                      //与上一个i不在同一个作用域要重新定义 
	{
		cout<<music[i].name<<" "<<music[i].singer<<" "<<music[i].clickrate<<endl;
	}
	return 0;
}
