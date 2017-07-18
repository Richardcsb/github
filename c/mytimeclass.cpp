#include<iostream>
#include<stdio.h>
using namespace std;
class MyTime
{
	private:
		int hour;
		int minute;
		int second;
	public:
		void SetTime();
		void print_12();
		void print_24();
}; 
void MyTime::SetTime()
{
	cin>>hour>>minute>>second;
}
void MyTime::print_12()
{
	printf("%02d:",hour%12);
	printf("%02d:",minute);
	printf("%02d",second);
	if(hour>=12)
		cout<<" PM"<<endl;
	else
		cout<<" AM"<<endl;
}
void MyTime::print_24()
{
	printf("%02d:",hour);
	printf("%02d:",minute);
	printf("%02d\n",second);
}
int main()
{
	MyTime time;
	time.SetTime();
	time.print_12();
	time.print_24();
	return 0;
}