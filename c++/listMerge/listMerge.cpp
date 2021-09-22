/*
 * listMerge.cpp
 *
 *  Created on: 21 Sep 2021
 *      Author: yo
 */
#include <iostream>
#include <list>
#include <cctype>

using namespace std;

template<class type>
void disp(type t);

int main()
{
	list<int> li1,li2;
	list<int>::iterator p;
	int i=0;

	for(i=0;i<10;i+=2)
		li1.push_back(i);
	for(i=1;i<11;i+=2)
		li2.push_back(i);
	disp(li1);
	disp(li2);

	li1.merge(li2);

	if(li2.empty())
	{
		cout<<"list2 is empty";
	}
	disp(li1);

	return 0;
}

template<class type>
void disp(type t)
{
	list<int>::iterator p;
	p=t.begin();
	while(p!=t.end())
	{
		cout<<" "<<*p;
		p++;
	}
	cout<<"\n";
}
