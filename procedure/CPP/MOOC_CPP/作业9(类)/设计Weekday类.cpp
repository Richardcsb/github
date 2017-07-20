#include<iostream>
using namespace std;
class Weekday
{
	public:
		void show(int n){
			int k = 3;
			while(k){
				if(k != 3)
					n = (n+1)%7;
				k--; 
				switch(n)
				{
					case 0:cout<<"星期日"<<endl;break; 
					case 1:cout<<"星期一"<<endl;break;
					case 2:cout<<"星期二"<<endl;break;
					case 3:cout<<"星期三"<<endl;break;
					case 4:cout<<"星期四"<<endl;break;
					case 5:cout<<"星期五"<<endl;break;
					case 6:cout<<"星期六"<<endl;
				}
			} 
		} 
}; 
int main()
{
	Weekday weekday;
	int n;
	cin>>n;
	weekday.show(n); 
	return 0;
}
