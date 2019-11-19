#include <iostream>
#include "Hinh.h"
using namespace std;
class HinhTron : public Hinh
{
	private:
		int r;
	public:
		HinhTron();
		HinhTron(int r1,int x1,int y1);
		void InHT();
		int GetR();
};
HinhTron::HinhTron():Hinh()
{
	r = 0;
}
HinhTron::HinhTron(int r1,int x1,int y1):Hinh(x1,y1)
{
	r = r1;
}
void HinhTron::InHT()
{
	Hinh::InH();
	cout<<"Ban Kinh r = "<<r<<endl;
}
int HinhTron::GetR()
{
	return r;
}
