#include<iostream>
using namespace std;
class Dog
{
	private:
		string name;
		int age;
		char sex;
		double weight;
	public:
		void setdata(string a,int b,char c,double d);
	/*	void GetName();
		void GetAge();
		void GetSex();
		void GetWeight();*/
		void showdata();
}; 
void Dog::setdata(string a,int b,char c,double d)
{
	name = a;
	age = b;
	sex = c;
	weight = d;
}
void Dog::showdata()
{
	cout<<"It is my dog."<<endl;
	cout<<"Its name is "<<name<<"."<<endl;
	cout<<"It is "<<age<<" years old."<<endl;
	if(sex=='m')
		cout<<"It is "<<sex<<"ale."<<endl;
	else
		cout<<"It is "<<sex<<"emale."<<endl;
	cout<<"It is "<<weight<<" kg"<<endl;
}
int main()
{
	string a;
	int b;
	char c;
	double d;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	Dog dog;
	dog.setdata(a,b,c,d);
	dog.showdata();
	return 0;
}
