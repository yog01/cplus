/*
 * dynamicmemoryallocation.cpp
 *
 *  Created on: 29 Apr 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

int main()
{
	int *p;

	try{
		p=new int;
	}
	catch(const bad_alloc &ex)
	{
		cout<<"\nallocation "<<ex.what();

	}

	*p=100;

	cout<<"\nvalue of p: "<<*p;

	delete(p);

	return 0;
}
