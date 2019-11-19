#include<iostream>
using namespace std;
class PS{
	private:
		int tu,mau;
	public:
	PS();
	PS(int t,int m);
	void NhapPS();
	void XuatPS();
	int UCLN(int x,int y);
    PS rutgon();
	PS operator+(PS a);
	PS operator-(PS a);
	PS operator*(PS a);
	PS operator/(PS a);
	friend ostream & operator << (ostream &o,PS &a);
	friend istream & operator >> (istream &i,PS &a);	
};
PS::PS(){
	tu=1;
	mau=2;
}
PS::PS(int t,int m){
	tu=t;
	mau=m;
}
void PS::NhapPS(){
	do{
		cout<<"Nhap vao tu: "; cin>>tu;
		cout<<"Nhap vao mau: "; cin>>mau;
	}while(mau==0);
}
void PS::XuatPS(){
	if(tu==0)
	cout<<0;
	else if(mau==1)
	cout<<tu;
	else
	cout<<tu<<"/"<<mau<<endl;
}
int PS::UCLN(int x, int y) 
{
   if(x==y)
      return x;
   else
      if(x>y)
         return UCLN(x-y,y);
      else
         return UCLN(x,y-x);
}
// Rut gon phan so
PS PS::rutgon() 
{ 
   int k = UCLN(tu,mau);
   tu=tu/k;
   mau=mau/k;
   return *this;
}
//qua tai + - * /
PS PS::operator+(PS a)
{
	PS tam;
	tam.tu = tu*a.mau + mau*a.tu;
	tam.mau = mau*a.mau;
	return tam;
}
PS PS::operator-(PS a)
{
	PS tam;
	tam.tu = tu*a.mau - mau*a.tu;
	tam.mau = mau*a.mau;
	return tam;
}
PS PS::operator*(PS a)
{
	PS tam;
	tam.tu = tu*a.tu;
	tam.mau = mau*a.mau;
	return tam;
}
PS PS::operator/(PS a)
{
	PS tam;
	tam.tu = tu*a.mau;
	tam.mau = mau*a.tu;
	return tam;
}
// qua tai >> & <<
ostream & operator << (ostream &os,PS &a)
{
	os<<a.tu<<"/"<<a.mau<<endl;
}
istream & operator >> (istream &is,PS &a)
{
	cout<<"Nhap tu: ";
	is>>a.tu;
	cout<<"Nhap mau: ";
	is>>a.mau;
}
main()
{
	PS a,b,c;
	//a.NhapPS();
	//b.NhapPS();
	//a.XuatPS();
	//b.XuatPS();
	//c = a * b;
	//c.XuatPS();
	//c.rutgon();
	//c.XuatPS();
	cin>>a;
	cout<<a;
}
