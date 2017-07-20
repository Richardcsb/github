#include<iostream>
using namespace std;
class Trapezium
{
	private:
	int x1,y1,x2,y2,x3,y3,x4,y4;
	public:
		void GetPositon();
		int Area();
};
void Trapezium::GetPositon()
{
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
}
int Trapezium::Area()
{
	int wight;
	int hight;
	int area;
	wight = x2-x1+x4-x3;
	hight = y1-y3;
	area  = wight*hight*0.5;
	return area;
}
int main()
{
	Trapezium t;
	t.GetPositon();
	cout<<t.Area();
	return 0;
}
