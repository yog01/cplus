/*
 * overloadingtemplate.cpp
 *
 *  Created on: 16 Jun 2021
 *      Author: yo
 */
/* creating explicit, overloaded version of genric function, you can also overload the template specification itself.
 *
 */
#include <iostream>
using namespace std;

template <class data>
int added(data x, data y)
{
	return x+y;
}

template <class fdata, class data>
float addedf(fdata x, data y)
{
	return x+y;
}

int main()
{
	int a=2,b=3;
	float a1=2.3,b1=2.4;

	cout<<"\n added int"<<added(a,b);
	cout<<"\n fadded float"<<addedf(a1,b);

	return 0;
}
