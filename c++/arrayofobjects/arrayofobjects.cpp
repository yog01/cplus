/*
 * arrayofobjects.cpp
 *
 *  Created on: 20 Apr 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class acces_object{
	int i;
	int j;
public:
	acces_object()
	{
		i=0;
		j=0;
	}

	acces_object(int x, int y):i(x),j(y)
	{

	}

	int get_obj()
	{
		return i;
	}
	int get_obje()
	{
		return j;
	}
};
//function memory is allocated 1st at defination than object decleartion data meber memory is allocated
int main(int argc, char **argv) {
	acces_object ob[3];

	for(int i=0; i<3; i++)
	{
		cout<<ob[i].get_obj()<<" i unintialized value\n";
		cout<<ob[i].get_obje()<<"j unintialized value\n";
	}

	acces_object ob1[3]={acces_object(1,2),acces_object(3,4),acces_object(5,6)};

	for(int i=0; i<3; i++)
	{
		cout<<ob1[i].get_obj()<<" i intialized value\n";
		cout<<ob1[i].get_obje()<<"j initialized value\n";
	}
	return 0;
}

