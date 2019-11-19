#include <iostream>
#include <math.h>
using namespace std;
class DT
{
	private:
		double a[20];
		int n;
	public:
		DT();
		DT(double b[],int x);
		void Nhap();
		void In();
		DT operator+(DT b);
		friend ostream & operator <<(ostream &o,DT &dt);
		friend istream & operator >>(istream &i,DT &dt);
		int operator ^ (int x)
		{
			int t=1, kq = 0;
			for(int i = 0 ; i<= n; i++)
			{
				if( i == 0 ) t = 1;
				else for(int j = i ; j>0; j--) t = t*x;
				t = t * a[i];
				kq = kq + t;
				t = 1;
			}
			return kq;
		}
};
DT::DT()
{
	double a[20] = {3,4,0,2};
	n = 3;
}
DT::DT(double b[],int x)
{
	n = x;
	for(int i = 0; i<= n; i++)
	{
		a[i] = b[i];
	}
}
void DT::Nhap()
{
	cout<<"Nhap Bac n = "; cin>>n;
	for(int i = 0; i<= n; i++)
	{
		cout<<"Nhap SH bac "<<i<<" : "; cin>>a[i];
	}
}
void DT::In()
{
	cout<<endl;
	cout<<a[n]<<"a"<<n;
	for(int i = n-1 ; i>=0; i--)
	{
		if(a[i]>0) cout<<"+"<<a[i]<<"a"<<i;
		else cout<<a[i]<<"a"<<i;
	}
}
DT DT::operator+(DT b)
{
	DT t;
	if(n > b.n)
	{
		for(int i=0 ; i<= b.n;i++)
		{
			t.a[i] = a[i] + b.a[i];	
		}
		for(int i = b.n +1 ; i<=n; i++) t.a[i] = a[i];
		t.n = n ;
	}
	else if(b.n > n)
	{
		for(int i=0 ; i<= n;i++)
		{
			t.a[i] = a[i] + b.a[i];	
		}
		for(int i = n +1 ; i<=b.n; i++) t.a[i] = b.a[i];
		t.n = b.n;
	}
	else
	{
		for(int i=0 ; i<= b.n;i++)
		{
			t.a[i] = a[i] + b.a[i];	
		}
		t.n = n = b.n;
	}	
	return t;
}
istream & operator >> (istream &is,DT &dt)
{
	cout<<"Nhap Bac n = "; is>>dt.n;
	for(int i = 0; i<= dt.n; i++)
	{
		cout<<"Nhap SH bac "<<i<<" : "; cin>>dt.a[i];
	}
}
ostream & operator << (ostream &os,DT &dt)
{
	cout<<endl;
	os<<dt.a[dt.n]<<"a"<<dt.n;
	for(int i = dt.n-1 ; i>=0; i--)
	{
		if(dt.a[i]>0) os<<"+"<<dt.a[i]<<"a"<<i;
		else os<<dt.a[i]<<"a"<<i;
	}
}
main()
{
	DT a,b,c;
	//a.Nhap(); //b.Nhap();
	//a.In(); //b.In();
	//c = a + b;
	//c.In();
	//b = a^();
	//b.In();
	cin>>a;
	cout<<a;
	int kq;
	kq = a^(2);
	cout<<endl;
	cout<<kq;
}
