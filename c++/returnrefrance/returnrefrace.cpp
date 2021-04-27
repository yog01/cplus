/*
 * returnrefrace.cpp
 *
 *  Created on: 27 Apr 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;
char s[6]="Hello";
char &replace(int i);

int main()
{
	replace(3)='X';
	cout<<s;
	return 0;
}

char &replace(int i)
{
	return s[i];
}
