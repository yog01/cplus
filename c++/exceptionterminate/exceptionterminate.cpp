/*
 * exceptionterminate.cpp
 *
 *  Created on: 4 Aug 2021
 *      Author: yo
 */
#include <iostream>
#include <exception>
using namespace std;

void my_handler();

int main()
{
	int i=10;
	set_terminate(my_handler);
	try{
		throw i;
	}catch(double j){

	}
	return 0;
}
void my_handler()
{
	cout<<"my handler\n";
	abort();
}
