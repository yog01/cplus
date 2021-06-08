/*
 * virtualfnmultilevel.cpp
 *
 *  Created on: 8 Jun 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class base{
public:
	virtual void v_fn()
	{
		cout<<"\nvirtual baase";
	}
};
class derive1: public base{
public:
	void v_fn()
	{
		cout<<"\n virtual derive1";
	}
};
class derive2: public derive1{
public:
	//if call v_fn than herirical derive1::v_fn is called
};

int main()
{

	base *ob,obb;
	derive1 obd1;
	derive2 obd2;

	ob=&obb;
	ob->v_fn();

	ob=&obd1;
	ob->v_fn();

	ob=&obd2;
	ob->v_fn();

	return 0;
}
