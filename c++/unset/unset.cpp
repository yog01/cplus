/*
 * unset.cpp
 *
 *  Created on: 9 Aug 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

int main(){

	cout.setf(ios::uppercase|ios::scientific);
	cout<<"\n"<<100.0;
	cout.unsetf(ios::basefield);
	cout<<"\n"<<100;

	return 0;
}
