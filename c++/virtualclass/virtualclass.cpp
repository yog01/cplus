/*
 * virtualclass.cpp
 *
 *  Created on: 2 Jun 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;
class base{
public:
	int i;
};
class derived1: virtual public base{
public:
	int j;
};
class derived2: virtual public base{
public:
	int k;
};

class basic: public derived1, public derived2{
public:
	void show()
	{
		cout<<"\n value of i j k"<<i<<" "<<j<<" "<<k;
	}
};

int main()
{
	basic ob;

	ob.derived1::i = 0;
	ob.j=1;
	ob.k=2;
	ob.show();

	return 0;
}
