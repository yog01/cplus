/*
 * listPushFront.cpp
 *
 *  Created on: 17 Sep 2021
 *      Author: yo
 */
#include <iostream>
#include <list>
#include <cctype>

using namespace std;

template<class type>
void displ(type l);

int main()
{
	list<int> l;
	list<int>::iterator p;
	int i=0;

	while(i!=10)
	{
		l.push_back(i);
		i++;
	}

	displ(l);

	p=l.end();
	while(p!=l.begin())
	{
		p--; // on reverse direction do end()-1
		cout<<" "<<*p;
	}
	cout<<"\n";
	i=0;
	while(i!=10)
	{
		l.push_front(i);
		i++;
	}
	displ(l);

	return 0;
}
template<class type>
void displ(type l)
{
	list<int>::iterator p;
	p=l.begin();
	cout<<"size  "<<l.size();
	while(p!=l.end())
	{
		cout<<" "<<*p;
		p++;
	}
	cout<<"\n";
}
