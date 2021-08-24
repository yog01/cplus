/*
 * FileSize.cpp
 *
 *  Created on: 23 Aug 2021
 *      Author: yo
 */
#include <iostream>
#include <fstream>
using namespace std;
struct emp{
	int a;
};
int main()
{
	struct emp e;

	e.a=10;

	ofstream out("tst",ios::out|ios::binary);
	if(!out)
	{
		cout<<"unable to open file\n";
		exit(0);
	}

	out.write((char *)&e, sizeof(e)); //pointer type cast is necessary so to know which type of data to hold

	out.close();

	ifstream in("tst",ios::in|ios::binary);

	if(!in)
	{
		cout<<"Unable to open file";
		exit(0);
	}

	in.read((char *)&e, sizeof(e)); //pointer typecast is necessary
	cout<<"value is "<<e.a<<"\n Size is"<<in.gcount();

	in.close();

	return 0;
}
