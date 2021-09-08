/*
 * statusoffReadStream.cpp
 *
 *  Created on: 31 Aug 2021
 *      Author: yo
 */
#include <iostream>
#include <fstream>
using namespace std;
void checkstatus(ifstream &in);

int main()
{
	char c[5];
	ifstream in("tst",ios::binary|ios::in);

	if(!in)
	{
		cout<<"unable to open\n";
		exit(0);
	}

	while(!in.eof())
	{
		for(int i=0;i<5;i++)
		{
		in.get(c[i]);
			cout<<c[i];
			checkstatus(in);

		}
	}
	in.close();
	return 0;
}

void checkstatus(ifstream &in)
{
	ios::iostate i;

	i=in.rdstate();

	if(i & ios::goodbit)
	{
		cout<<"good"; //problem not checking
	}
	else if (i & ios::badbit) {
		cout<<"baad";
	}else if (i & ios::eofbit) {
		cout<<"eofbit";
	}

}
