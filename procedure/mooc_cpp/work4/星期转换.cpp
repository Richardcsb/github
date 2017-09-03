#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<1||n>7)
	{
		cout<<"invalid"<<endl;
		exit(0);
	}
	enum Week{monday=1,tuesday,wednesday,thursday,friday,saturday,sunday
	};
	switch((enum Week)n)                                //(enum Week)¿ÉÈ¥µô 
	{
		case monday:cout<<"monday"<<endl;break;
		case tuesday:cout<<"tuesday"<<endl;break;
		case wednesday:cout<<"wednesday"<<endl;break;
		case thursday:cout<<"thursday"<<endl;break;
		case friday:cout<<"friday"<<endl;break;
		case saturday:cout<<"saturday"<<endl;break;
		case sunday:cout<<"sunday"<<endl;break;
	}
	return 0;
}
