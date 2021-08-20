/*
 * filesysopen.cpp
 *
 *  Created on: 19 Aug 2021
 *      Author: yo
 */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream out("tst");

	if(!out.is_open())
	{
		cout<<"error in file";
		return -1;
	}

	out<<"HI";

	out.close();

	return 0;
}
