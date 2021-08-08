/*
 * setflag.cpp
 *
 *  Created on: 8 Aug 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;
// template <ios x>
//class basic_ios{
//};
int main(int argc, char **argv) {

	cout.setf(ios::showpoint | ios::showpos | ios::showbase);
	cout<<100.0;
	return 0;
}

