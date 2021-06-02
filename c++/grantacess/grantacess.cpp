/*
 * grantacess.cpp
 *
 *  Created on: 1 Jun 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class base{
protected:
	int i;
public:
	base(int x):i(x)
	{

	}
	void set(int x)
	{
		i=x;
	}
	void show()
	{
		cout<<"\n value of i"<<i;
	}
};
class derived: private base{
public:
	derived(int s):base(s){

	}
	base::i;
	base::set;
	base::show;

	int j;

};
int main()
{
	derived ob(10);

	ob.show();

	ob.i=100;
	ob.show();

	ob.set(1000);
	ob.show();

	ob.j=101;
	cout<<"\n"<<ob.j;

	return 0;
}
