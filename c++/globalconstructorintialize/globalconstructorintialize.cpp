/*
 * globalconstructorintialize.cpp
 *
 *  Created on: 15 Apr 2021
 *      Author: yo
 */
#include <iostream>

using namespace std;

class count{
	int noofobj;
public:
	count (int no);
	~count();
}glob_obj1(1),glob_obj2(2);

count::count(int no)
{
	cout<<"object created "<<no<<"\n";
	noofobj=no;
}
count::~count()
{
	cout<<"object destroyed"<<noofobj<<"\n";
}

int main()
{
	count loc_ob(3);

	cout<<"In main\n";

	return 0;
}
