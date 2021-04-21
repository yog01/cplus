/*
 * pointertoobjects.cpp
 *
 *  Created on: 21 Apr 2021
 *      Author: yo
 */
#include <iostream>

using namespace std;

class c1{
	int a;
	int b;
public:
	int c;
	c1(int x, int j):a(x),b(j){}
	int get()
	{
		return a;
	}
	int *get_p();
};

int *c1::get_p()
{
	return &b;
}


int main(int argc, char **argv) {
	c1 ob(1,2);
	c1 *p;
	int *v,*y;
	p=&ob;
	v=ob.get_p();
	y=&ob.c;
	*y=4;
	cout<<"return value by pointer to object "<<p->get()<<"\n";
	cout<<"return value by class member "<<*v<<"\n";
	cout<<"pointer val "<<ob.c<<"\n";
	return 0;
}

