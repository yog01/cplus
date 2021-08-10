/*
 * overloadsetf.cpp
 *
 *  Created on: 9 Aug 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;
//In this version, only the flags specified by flags2 are affected. They are first cleared and
//then set according to the flags specified by flags1.
int main(){

	cout.setf(ios::showpos|ios::showpoint, ios::showpos);
	cout<<100.0;

	return 0;
}
