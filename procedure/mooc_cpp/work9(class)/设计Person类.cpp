#include<iostream>
#include<string.h>
using namespace std;
class Person
{
	private:
		string name;
		int age;
		char sex;
	public:
		void Register(string a,int b,char c);
		void ShowMe();
};
void Person::Register(string a,int b,char c)
{
	name = a;
//	strcpy(name,a);
	age = b;
	sex = c;
}
void Person::ShowMe()
{
	cout<<name<<" "<<age<<" "<<sex<<endl;
}
int main()
{
	string a;
	int b;
	char c;
	cin>>a;
	cin>>b;
	cin>>c;
	Person person1;
	Person person2;
	person1.Register(a,b,c);
	person2.Register("Zhang3",19,'m');
	person1.ShowMe();
	person2.ShowMe();
	return 0;
}
