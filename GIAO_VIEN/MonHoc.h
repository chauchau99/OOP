#include <iostream>
#pragma once
#include <string.h>
using namespace std;
class MH
{
	private:
		char tenmh[20];
		int stiet;
	public:
		MH();
		MH(char tenmh1[20],int stiet1);
		void InMH();
		~MH();
};
MH::MH()
{
	strcpy(tenmh,"Toan");
	stiet = 0;
}
MH::MH(char tenmh1[20],int stiet1)
{
	strcpy(tenmh,tenmh1);
	stiet = stiet1;
}
void MH::InMH()
{
	cout<<"Mon Hoc : "<<tenmh<<endl;
	cout<<"So Tiet : "<<stiet<<endl;
}
MH::~MH()
{
	//delete tenmh[20];
	//delete stiet;
}
