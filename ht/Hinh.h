#include <iostream>
using namespace std;
class Hinh
{
	private:
		int x,y;
	public:
		Hinh();
		Hinh(int x1, int y1);
		void InH();
};
Hinh::Hinh()
{
	x = 0;
	y = 0;
}
Hinh::Hinh(int x1,int y1)
{
	x = x1;
	y = y1;
}
void Hinh::InH()
{
	cout<<"("<<x<<","<<y<<")"<<endl;
}
