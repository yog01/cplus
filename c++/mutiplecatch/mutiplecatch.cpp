/*
 * mutiplecatch.cpp
 *
 *  Created on: 19 Jul 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

void fun(int i)
{
	try{
		if(i)
		{
			throw i;
		}
		else
		{
			throw "value is zero";
		}
	}
	catch (int e) {
		cout<<"\ncaught a integer exception"<<e;
	}
	catch (const char *c) {
		cout<<"\ncaught a 0:"<<c;
	}
}
int main()
{

	cout<<"\nStart";
	fun(0);
	fun(1);
	fun(2);
	cout<<"\nEnd";

	return 0;
}
