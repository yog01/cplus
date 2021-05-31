/*
 * interitanceconsanddescall.cpp
 *
 *  Created on: 30 May 2021
 *      Author: yo
 */
//constructor are called order of derivation how its written and destructor in reverse order.
#include <iostream>
using namespace std;

class base1{
public:
	base1(){
		cout<<"\nConstructor base1";
	}
	~base1(){
			cout<<"\ndestructor base1";
	}
};
class base2{
public:
	base2(){
		cout<<"\nConstructor base2";
	}
	~base2(){
			cout<<"\ndestructor base2";
	}
};
class derived: public base2, public base1{
public:
	derived()
	{
		cout<<"\n constructor derived";
	}
	~derived()
		{
			cout<<"\n destructor derived";
		}
};
int main()
{

	derived ob;

	return 0;
}
