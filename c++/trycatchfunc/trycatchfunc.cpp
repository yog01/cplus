/*
 * trycatchfunc.cpp
 *
 *  Created on: 17 Jul 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

void fun(int i)
{
	try {
		cout<<"Inside try block\n";
		if(i)
		{
			throw i;
		}
	} catch (int i) {
		cout<<"Caught expection\n";
		cout<<i<<"\n";
	}
}

int main()
{
	cout<<"start\n";
	fun(0);
	fun(1);
	fun(2);
	cout<<"END\n";


	return 0;
}
