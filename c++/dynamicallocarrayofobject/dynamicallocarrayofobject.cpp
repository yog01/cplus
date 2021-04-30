/*
 * dynamicallocarrayofobject.cpp
 *
 *  Created on: 30 Apr 2021
 *      Author: yo
 */
#include <iostream>
#include <string.h>
#include <new>
using namespace std;

class balance{
	char name[80];
	int salary;
public:
	balance(){}
	balance(char *s, int r)
	{
		cout<<"\n Constructor "<< s;
		salary=r;
		strcpy(name,s);
	}
	~balance()
	{
		cout<<"\n Destructor "<<name;
	}

	void set(char *s, int r)
	{
		salary=r;
		strcpy(name,s);
	}

	void get(char *s, int &r)
	{
		r=salary;
		strcpy(s,name);
	}

};

int main()
{
	balance *p, *c;
	int salary;
	char name[80];

	try{
		p=new balance[2];
		c=new balance("con",123);
	}catch (bad_alloc e) {
		cout<< "\n memory allocation for array of object fail"<<e.what();
	}

	p[0].set("yo",1234);
	p[1].set("yog",4321);

	p[0].get(name, salary);
	cout<<"\n 1st name "<<name<<"\n salary "<<salary;
	p[1].get(name, salary);
	cout<<"\n 2nd name "<<name<<"\n salary "<<salary;
	c->get(name, salary);
	cout<<"\n C name "<<name<<"\n C salary "<<salary;
	delete []p;
	delete c;
	return 0;
}
