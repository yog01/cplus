/*
 * setflags.cpp
 *
 *  Created on: 11 Aug 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

void status_flag();
int main()
{
	ios::fmtflags f;

	status_flag();
	f=ios::showpoint | ios::right | ios::basefield;

	cout.flags(f);
	cout<<"\n";
	status_flag();

	return 0;
}
void status_flag()
{
	ios::fmtflags d;
	uint16_t i;
	d=cout.flags();
	for(i=0x4000;i;i=i>>1)
	{
		if(d&i)
			cout<<1;
		else
			cout<<0;
	}

}
