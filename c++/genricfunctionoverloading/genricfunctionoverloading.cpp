/*
 * genricfunctionoverloading.cpp
 *
 *  Created on: 14 Jun 2021
 *      Author: yo
 */
//for bosst performance for some data type
#include <iostream>
using namespace std;

template <class genric>
void swaparg(genric &a,genric &b)
{
	genric temp;

	temp=a;
	a=b;
	b=temp;
	cout<<"\ninside genric function";
}
void swaparg(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"\ninside explicit overloaded genric function";
}
int main(int argc, char **argv) {

	int a=10, b=20;
	char a1='a',b1='c';

	swaparg(a, b);
	cout<<"\n value of a 10"<<a<<" value of b 20"<<b;

	swaparg(a1, b1);
	cout<<"\n value of a1 a"<<a1<<" value of b1 c"<<b1;

	return 0;
}
