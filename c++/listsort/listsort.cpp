/*
 * listsort.cpp
 *
 *  Created on: 20 Sep 2021
 *      Author: yo
 */
#include <iostream>
#include <list>
#include <cctype>

using namespace std;

template<class type>
void displ(type t);
int main()
{
	list<int> lis;
	list<int>::iterator p;
	int i=0;

	while(i!=10){
		lis.push_back(rand());
		i++;
	}
	displ(lis);

	lis.sort();

	displ(lis);

	return 0;
}
template<class type>
void displ(type t)
{
	list<int>::iterator p;
	cout<<"Size "<<t.size();
	p=t.begin();
	while(p!=t.end())
	{
		cout<<" "<<*p;
		p++;
	}
	cout<<"\n";
}
