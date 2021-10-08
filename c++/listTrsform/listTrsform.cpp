/*
 * listTrsform.cpp
 *
 *  Created on: 4 Oct 2021
 *      Author: yo
 */
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int added(int i);
template <class type>
void disp(type t);
int main()
{
	list<int> l1;
	list<int>::iterator p;
	int i=0;

	for(i=0;i<10;i++)
	{
		l1.push_back(i);
	}
	disp(l1);

	transform(l1.begin(), l1.end(), l1.begin(), added);

	disp(l1);


	return 0;
}

int added(int i)
{
	return i+10;
}

template <class type>
void disp(type t)
{
	list<int>::iterator p=t.begin();

	while(p!=t.end())
	{
		cout<<" "<<*p;
		p++;
	}
	cout<<"\n";
}
