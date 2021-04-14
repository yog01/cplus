/*
 * staticdatameber.cpp
 *
 *  Created on: 14 Apr 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class shared{
	static int resource;
public:
	int checkstate();
	void freeresource();
};

int shared::resource;

int shared::checkstate()
{
	if(resource)
	{
		resource=0; // not free
	}
	else
	{
		resource=1; // free
		return 1;
	}
	return 0;
}

void shared::freeresource()
{
	resource=0;
}
//object is not created than also memory is created for static variables
int main()
{
	shared ob1,ob2;
	if(ob1.checkstate())//ob1 capture resorce 1
		cout<<"ob1 using resource is not free\n";
	if(!ob2.checkstate())//ob2 cannot acess true execute
		cout<<"ob2 is denied\n";
	ob1.freeresource(); // now free ob1 res=0
	if(ob2.checkstate()) // ob2 acess ress and false execute res=1
	    cout<<"ob2 can acess resource is free\n";
	else
		cout<<"ob2 cann't\n";
}
