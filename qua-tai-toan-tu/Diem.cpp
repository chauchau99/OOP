#include <iostream>
#include <math.h>
using namespace std;
class Diem
{
	private:
		int x;
		int y;
	public:
		void NhapDiem();
		void InDiem();
		Diem(int h,int t);
		int GiaTriX();
		int GiaTriY();
		friend float KhoangCach(Diem ,Diem  );
		Diem(const Diem &m);
				
};
void Diem::NhapDiem()
{
	cout<<"Nhap hoang do: "; cin>>x;
	cout<<"Nhap trun do: " ; cin>>y;
}
void Diem::InDiem()
{
	cout<<"("<<x<<","<<y<<")"<<endl;
}
Diem::Diem(int h,int t)
{
	x=h;
	y=t;
}
int Diem::GiaTriX()
{
	return x;
}
int Diem::GiaTriY()
{
	return y;
}
float KhoangCach(Diem m1, Diem m2)
{
	Diem m(0,0);
	m.x = m2.x - m1.x;
	m.y = m2.y - m1.y;
	float kc = sqrt(m.x*m.x + m.y*m.y );
	return kc;
}
Diem::Diem(const Diem &m)
{
	x = -m.x;
	y = -m.y;
}
main()
{
	// tao diem A + in diem A
	Diem A(3,4);
	cout<<"Toa do cua diem A la ";
	A.InDiem();
	// Nhap diem B + in diem B
	Diem B(0,0);
	B.NhapDiem();
	cout<<"toa do diem B la ";
	B.InDiem();
	// tao diem C
	Diem C(B);
	cout<<"Toa do diem C la ";
	C.InDiem();
	// tinh khoang cach tu B den O
	Diem O(0,0);
	cout<<"Khoang cach tu B den O la: "<<KhoangCach(B,O)<<endl;
	// tinh khoang cach tu C den B
	cout<<"Khoang cach tu B den O la: "<<KhoangCach(B,C)<<endl;
}






