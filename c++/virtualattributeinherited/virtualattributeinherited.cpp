/*
 * virtualattributeinherited.cpp
 *
 *  Created on: 7 Jun 2021
 *      Author: yo
 */

#include <iostream>
using namespace std;

class base{
public:
	virtual void v_func()
	{
		cout<<"\nvirtual of base";
	}
};
class derived1: public base{
public:
	void v_func()
	{
		cout<<"\n virtual of derived1";
	}
};
//In this case, derived2 inherits derived1 rather than base, but vfunc( ) is still virtual.
class derived2: public derived1{
public:
	void v_func()
	{
		cout<<"\n virtual of derived2";
	}
};

int main()
{

	base *obp,obb;
	derived1 dob1;
	derived2 dob2;


	obp=&obb;
	obp->v_func();

	obp=&dob1;
	obp->v_func();

	obp=&dob2;
	obp->v_func();
	return 0;
}
