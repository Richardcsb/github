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
					case 0:cout<<"������"<<endl;break; 
					case 1:cout<<"����һ"<<endl;break;
					case 2:cout<<"���ڶ�"<<endl;break;
					case 3:cout<<"������"<<endl;break;
					case 4:cout<<"������"<<endl;break;
					case 5:cout<<"������"<<endl;break;
					case 6:cout<<"������"<<endl;
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
