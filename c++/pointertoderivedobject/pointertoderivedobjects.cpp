/*
 * pointertoderivedobjects.cpp
 *
 *  Created on: 23 Apr 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;
class base{
	int i;
public:
	void set_i(int x){
		i=x;
	}
	int get_i();
};

int base::get_i()
{
	return i;
}
class derived: public base{
	int j;
public:
	void set_j(int x){
		j=x;
	}
	int get_j();
};
int derived::get_j()
{
	return j;
}
int main()
{
	base *bob;
	derived dob;
	bob=&dob;
	bob->set_i(10);
	cout<<"base class i value "<<bob->get_i();
	((derived *)bob)->set_j(20);
	cout<<"\n derived class j value "<<((derived *)bob)->get_j();
	return 0;
}
