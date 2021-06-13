/*
 * usingvirtualfn.cpp
 *
 *  Created on: 10 Jun 2021
 *      Author: yo
 */
//one interface, multiple methods
// base class you can create that rerlates to genral class. Derive class fill specific details.
#include <iostream>
using namespace std;

class base{
protected:
	int actualvalue, convertedvalue;
public:
	base(int x):actualvalue(x){

	}
	int getinit(){
		return actualvalue;
	}
	int getconv(){
		return convertedvalue;
	}

	virtual void comput()=0;
};

class degreetoferenhit: public base{
public:
	degreetoferenhit(int x):base(x){

	}
	void comput()
	{
		convertedvalue=(actualvalue * 9/5)+32;
	}
};

class mtocm: public base{
public:
	mtocm(int x):base(x){

	}
	void comput()
	{
		convertedvalue=actualvalue*100;
	}
};

int main(int argc, char **argv) {

	base *p;

	degreetoferenhit dtf(10);

	mtocm mtc(10);

	p=&dtf;

	cout<<"\n Actual value input for degreetoferenhite"<<p->getinit();
	cout<<"\n Actual value input for degreetoferenhite"<<dtf.getinit();

	p->comput();

	cout<<"\n Converted value input for degreetoferenhite"<<p->getconv();

	p=&mtc;

	cout<<"\n Actual value input for meter to cm"<<p->getinit();

	p->comput();

	cout<<"\n Converted value input for meter to cm"<<p->getconv();

	return 0;
}
