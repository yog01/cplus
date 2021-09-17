/*
 * list.cpp
 *
 *  Created on: 16 Sep 2021
 *      Author: yo
 */
#include <iostream>
#include <list>
#include <cctype>

using namespace std;

template<class type>
void display(type t);

int main()
{
	list<int> l(10);
	list<int>::iterator p;
	int i=0;

	p=l.begin();
	while(p!=l.end())
	{
		*p=i;
		p++;
		i++;
	}

	display(l);
	i=0;
	p=l.begin();
	while(p!=l.end())
	{
		*p=i+100;
		p++;
		i++;
	}

	display(l);

	i=0;
	while(i!=10)
	{
		l.push_back(i);
		i++;
	}

	display(l);


	return 0;
}
template<class type>
void display(type t)
{
	list<int>::iterator p;
	p=t.begin();
	cout<<"\nsize "<<t.size();
	while(p!=t.end())
	{
		cout<<" "<<*p;
		p++;
	}
	cout<<"\n";
}
