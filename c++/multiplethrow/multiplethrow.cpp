/*
 * multiplethrow.cpp
 *
 *  Created on: 2 Aug 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

void handler(int i);
int main()
{
	int i=0;

	try{
		handler(i);
	}catch (const char *s) {
		cout<<"\nException inside main "<<s;
	}

	return 0;
}
void handler(int i)
{

	try
	{
		throw i;

	}catch(int j){
		cout<<"\nInside handler function()"<<j;
		throw "from handler";
	}
}
