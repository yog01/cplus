/*
 * HexaDisplay.cpp
 *
 *  Created on: 25 Aug 2021
 *      Author: yo
 */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int i,j;
	char get_arr[11];
	char write_arr[11]={"Hi my name"};
	ofstream out("tst",ios::binary|ios::out);

	if(!out)
	{
		cout<<"unable to open file\n";
		exit(0);
	}

	out.write((char *)write_arr, sizeof(write_arr));

	out.close();

	ifstream in("tst",ios::binary|ios::in);

	if(!in)
	{
		cout<<"unable to open file\n";
		exit(0);
	}

	do{
		for(i=0;i<12 && !in.eof();i++)
		{
			if(in.eof())
			{
				cout<<"   ";
			}
			else
			{
			in.get(get_arr[i]);
			cout<<" "<<hex<<(int)get_arr[i];
			}
		}
	}while(!in.eof());
	cout<<"   ";
	for(j=0;j<11;j++)
	{
		if(isprint(get_arr[j]))
			cout<<get_arr[j];
	}

	return 0;
}
