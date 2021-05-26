/*
 * inheritaancebaseaccesscontrol.cpp
 *
 *  Created on: 25 May 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class base{

public:
	int i;
	base()
	{
		i=0;
	}

	void put_val()
	{
		i=10;
	}

	void show()
	{
		cout<<"\n value"<<i;
	}
};
class deriveed:public base{
public:
	void put_vald()
	{
		i=40;
	}
};
int main(int argc, char **argv) {

	deriveed ob;
	ob.put_val();
	ob.show();
	ob.put_vald();
	ob.show();

	return 0;
}

