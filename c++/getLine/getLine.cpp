/*
 * getLine.cpp
 *
 *  Created on: 24 Aug 2021
 *      Author: yo
 */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char arr[20]={"\0"};
	char val[20]={"HI my name"};
	ofstream out("tst",ios::out|ios::binary);
	if (!out) {
			cout<<"unable to open file\n";
			exit(0);
	}

	out.write((char *)val, sizeof(val));

	out.close();

	ifstream in("tst",ios::in|ios::binary);
	if (!in) {
		cout<<"unable to open file\n";
		exit(0);
	}

	while(in)
	{
		in.getline(arr, sizeof(arr));
		cout<<arr;
	}
	in.close();
	return 0;
}
