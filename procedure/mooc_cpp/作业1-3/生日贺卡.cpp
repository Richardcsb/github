#include<iostream>
using namespace std;
int main()
{
	char name1[50],name2[50];
	cin.getline(name1,50);                //name1表示要录入 ，字符串的符号，50表示大小 
	cin.getline(name2,50);
	cout<<"#########################################"<<endl;
	cout<<name1<<endl<<endl;
	cout<<"Happy birthday to you!"<<endl;
	cout<<endl;
	cout<<"       sincerrely yours  "<<name2<<endl;
	cout<<"#########################################"<<endl;
	return 0;
}
