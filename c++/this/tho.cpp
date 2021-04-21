/*
 * tho.cpp
 *
 *  Created on: 21 Apr 2021
 *      Author: yo
 */
#include <iostream>

using namespace std;

class c1{
	int a;
	int b;
	int final;
public:
	c1(int x, int y);
	int get();
};
c1::c1(int x, int y)
{
	this->a=x;
	this->b=y;
	this->final=1;
	if (b==0)
		return;
	for(;b>0;b--)
	{
		final=final*a;
	}
}
int c1::get()
{
	return final;
}
int main(int argc, char **argv) {

	c1 ob[2]={c1(1,2),c1(3,4)};
	cout<<"c1 a value "<<ob[0].get();
	cout<<"c2 a value "<<ob[1].get();
}
