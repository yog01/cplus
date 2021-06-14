/*
 * genricdatatype.cpp
 *
 *  Created on: 13 Jun 2021
 *      Author: yo
 */
//genric data type
#include <iostream>
using namespace std;

template <class data>
void swapee(data &a, data &b)
{
	data temp;

	temp=a;
	a=b;
	b=temp;
}

int main()
{

	int a=10, b=20;
	float a1=10.4, b1=20.5;

	swapee(a,b);
	swapee(a1,b1);

	cout<<"\n swaped a 10"<<a<<"and b 20 "<<b;
	cout<<"\n swaped a 10.4"<<a1<<" and b 20.5 "<<b1;

	return 0;
}
