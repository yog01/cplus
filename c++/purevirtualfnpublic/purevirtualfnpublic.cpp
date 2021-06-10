/*
 * purevirtualfnpublic.cpp
 *
 *  Created on: 9 Jun 2021
 *      Author: yo
 */
/*
 * 1. However, in many situations there can be no meaningful definition of a virtual
function within a base class. For example, a base class may not be able to define
an object sufficiently to allow a base-class virtual function to be created. Further,
in some situations you will want to ensure that all derived classes override a virtual
function. To handle these two cases, C++ supports the pure virtual function.

2.Keep in mind that when a virtual function is declared as pure, all derived classesmust override it.
3.A pure virtual function is a virtual function that has no definition within the base
class. To declare a pure virtual function, use this general form:
virtual type func-name(parameter-list) = 0;
 */
#include <iostream>
using namespace std;

class number{
protected:
	int val;
public:
	void set(int x){
		val=x;
	}
	virtual void btype()=0;
};

class hexa: public number{
public:
	void btype()
	{
		cout<<"\n hex value"<<hex<<val;
	}
};
class octa: public number{
public:
	void btype()
	{
		cout<<"\n octa value"<<oct<<val;
	}
};
class decm: public number{
public:
	void btype()
	{
		cout<<"\n dec value"<<val;
	}
};
int main()
{

	hexa h;
	octa o;
	decm d;

	number *p;

	h.set(40);
	p=&h;
	p->btype();

	o.set(40);
	p=&o;
	p->btype();

	d.set(40);
	p=&d;
	p->btype();

	return 0;
}

//Although you cannot create objects of an abstract class, you can create pointers and references to an abstract class.
