/*
 * exceptionhandling.cpp
 *
 *  Created on: 15 Jul 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

void funct(int i)
{
	cout<<"Inside function funct\n";
	if(i)
		throw i;
}

int main(int argc, char **argv) {


	try{
		cout<<"Inside try block\n";
		funct(0);
		funct(1);
	}
	catch (int i) {
		cout<<"throw error catched\n";
		cout<<i<<"\n";
	}

	return 0;
}

