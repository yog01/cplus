/*
 * string.cpp
 *
 *  Created on: 20 Oct 2021
 *      Author: yo
 */
#include <iostream>

using namespace std;

int main()
{
	string str("my name is");
	string str1("rohi");

	str.insert(5, str1);

	cout<<str<<"\n";

	str.erase(8);

	cout<<str<<"\n";

	return 0;
}
