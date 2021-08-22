/*
 * fileread.cpp
 *
 *  Created on: 20 Aug 2021
 *      Author: yo
 */
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char **argv) {

	char c[10];
	ifstream in("tst");

	if(!in.is_open())
	{
		cout<<"error to open file";
		exit(0);
	}

	in>>c;
	cout<<c;
	in.close();

	return 0;
}

