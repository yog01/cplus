/*
 * filereadwrite.cpp
 *
 *  Created on: 22 Aug 2021
 *      Author: yo
 */
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

struct emp{
	char name[30];
	int empid;
};

int main()
{
	struct emp e;

	memset(e.name,'\0',sizeof(e.name));
	memcpy(e.name,"Rajesh",7);

	e.empid=1;
	ofstream out("tst",ios::out|ios::binary);

	if(!out)
	{
		cout<<"not able to open file\n";
		exit(1);
	}

	out.write((char *)&e, sizeof(e));
	out.close();

	ifstream in("tst",ios::in|ios::binary);

	if(!in)
	{
		cout<<"not able to open file\n";
		exit(1);
	}

	in.read((char*)&e.name, sizeof(e));
	cout<<"name\n"<<e.name;
	cout<<"\nid\n"<<e.empid;

	in.close();

	return 0;
}
