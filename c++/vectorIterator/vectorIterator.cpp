/*
 * vectorIterator.cpp
 *
 *  Created on: 9 Sep 2021
 *      Author: yo
 */
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
	vector<char> v(10);
	vector<char>::iterator p;
	int i=0;
	p=v.begin();
	while(p!=v.end())
	{
		*p=i+'a';
		i++;
		p++;
	}
	cout<<"\n";
	p=v.begin();
	while(p!=v.end())
	{
		cout<<*p;
		p++;
	}
	cout<<"\n";
	i=0;
	while(i!=10){

		v.push_back(i+'k');
		i++;
	}
	p=v.begin();
	while(p!=v.end())
	{
		cout<<*p;
		p++;
	}
	cout<<"\n";
	p=v.begin();
	while(p!=v.end())
	{
		*p=toupper(*p);
		p++;
	}
	p=v.begin();
	while(p!=v.end())
	{
		cout<<*p;
		p++;
	}
	return 0;
}
