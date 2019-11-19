#include <iostream>
#pragma once
#include <string.h>
#include "MonHoc.h"
#include "Nguoi.h"
using namespace std;
class GV : public Nguoi, public MH
{
	private:
		MH mh;
		char bmct[40];
	public:
		GV();
		GV(char ht1[40],int ns1,char tenmh1[20],int stiet1,char bmct1[40]);
		void InGV();
		~GV();
};
GV::GV():Nguoi(),MH()
{
	strcpy(bmct,"Tu Nhien");
}
GV::GV(char ht1[40],int ns1,char tenmh1[20],int stiet1,char bmct1[40]):Nguoi(ht1,ns1),MH(tenmh1,stiet1)
{
	strcpy(bmct,bmct1);
}
void GV::InGV()
{
	Nguoi::InN();
	MH::InMH();
	cout<<"Bo Mon Cong Tac: "<<bmct<<endl;
}
GV::~GV()
{
	//delete md;
	//delete bmct[40];
}
