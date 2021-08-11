/*
 * statusofflag.cpp
 *
 *  Created on: 10 Aug 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

void flag_status();
int main()
{
	flag_status();

	cout.setf(ios::right|ios::showpoint|ios::fixed);
	cout<<"\n";
	flag_status();

	return 0;
}

void flag_status()
{
	std::ios::fmtflags f;
	uint16_t i;

	f=(ios::fmtflags)cout.flags();

	for(i=0x4000;i;i=i>>1)
	{
		if(i&f)
			cout<<1;
		else
			cout<<0;
	}
}
