/*
 * practice.cpp
 *
 *  Created on: Dec 30, 2021
 *      Author: ubuntu
 */
#include <iostream>
using namespace std;

class base{
	int a;
public:
	base(int i):a(i){

	}
	void disp() const
	{
		cout<<"value "<<a;
	}
};
class derived: public base{
	string k;
public:
	derived(int i,string j):base(i),k(move(j)){

	}

	void disp() const
	{
		cout<<"value derived"<<k;
	}
};

int main()
{
	base *obb,obv(10);
	derived obd(20,"RAM");


	obb=&obd;
	(obb)->disp(); //not virtual base fun call
	((derived *)obb)->disp(); //not virtual  derived cast derived fun call

	return 0;
}
