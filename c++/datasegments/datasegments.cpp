/*
 * datasegments.cpp
 *
 *  Created on: Mar 15, 2022
 *      Author: ubuntu
 */
#include <iostream>

using namespace std;

void fun();

int main()
{

	int a=10,b=20,c; //./data

	const int con=10; //./rodata

	static const int scon=20; //./rodata

	fun(); //./text


	return 0;
}

void fun()
{
	cout<<"Hi";
}
