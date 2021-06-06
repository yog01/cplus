/*
 * virtualreferance.cpp
 *
 *  Created on: 6 Jun 2021
 *      Author: yo
 */
//call fuction which base class pointer point to
//one interface multiple defination
//virtual cannot be friend
#include <iostream>
using namespace std;

class base{
public:
	virtual void v_func()
	{
		cout<<"\nbase class virtual function";
	}
};
class derived1: public base{
public:
	void v_func()
	{
		cout<<"\nderived1 class virtual function";
	}
};
class derived2: public base{
public:
	void v_func()
	{
		cout<<"\nderived2 class virtual function";
	}
};

void v_func(base &bp){
	bp.v_func();
}

int main(int argc, char **argv) {
	base ob;
	derived1 obd1;
	derived2 obd2;

	v_func(ob);
	v_func(obd1);
	v_func(obd2);

	return 0;
}
