/*
 * purevirtualfnpublic.cpp
 *
 *  Created on: 9 Jun 2021
 *      Author: yo
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

