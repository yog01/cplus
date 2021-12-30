/*
 * friendfunction.cpp
 *
 *  Created on: Dec 30, 2021
 *      Author: ubuntu
 */
#include<iostream>
using namespace std;

class derived;
class base{
public:
	void display(derived ob);
};

class derived{
	int a;
public:
	derived(int i):a(i){

	}
	friend void base::display(derived ob);
};

void base::display(derived ob)
{
	cout<<"value of i"<<ob.a;
}



int main()
{
	base ob;
	derived dob(1);

	ob.display(dob);
	return 0;
}
