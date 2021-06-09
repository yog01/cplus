/*
 * virtualfnheraricalinheritance.cpp
 *
 *  Created on: 8 Jun 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class base{
public:
	virtual void v_fun()
	{
		cout<<"\nvirtual base fn";
	}
};
class derive1: public base{
public:
	void v_fun()
	{
		cout<<"\nvirtual derive1 fn";
	}
};
class derive2: public base{
public:
	//call to v_func call base v_fun
};
int main()
{
	base *ob,obb;
	derive1 obd1;
	derive2 obd2;

	ob=&obb;
	ob->v_fun();

	ob=&obd1;
	ob->v_fun();

	ob=&obd2;
	ob->v_fun();

	return 0;
}
