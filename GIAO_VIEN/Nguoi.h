#include <iostream>
#pragma once
#include <string.h>
using namespace std;
class Nguoi
{
	private:
		char ht[40];
		int ns;
	public:
		Nguoi();
		Nguoi(char ht1[40],int ns1);
		void InN();
		~Nguoi();	
};
Nguoi::Nguoi()
{
	strcpy(ht,"MC");
	ns = 1999;
}
Nguoi::Nguoi(char ht1[40],int ns1)
{
	strcpy(ht,ht1);
	ns = ns1;
}
void Nguoi::InN()
{
	cout<<"Ten: "<<ht<<endl;
	cout<<"Nam sinh: "<<ns<<endl;
}
Nguoi::~Nguoi()
{
	//delete ht[40];
	//delete ns;
}
