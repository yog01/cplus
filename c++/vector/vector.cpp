/*
 * vector.cpp
 *
 *  Created on: 8 Sep 2021
 *      Author: yo
 */
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;


template<class type>
void print(type t);

int main()
{

	vector<char> v(10); //<specify which type of data vector store>
	uint i=0;

	cout<<"\nSize of vector "<<v.size();

	for(i=0;i<v.size();i++)
	{
		v[i]=i+'a';
	}
	cout<<"\n";
	print(v);


	for(i=0;i<10;i++)
	{
		v.push_back(i+'k');
	}
	cout<<"\nExpanded size of vector "<<v.size();
	cout<<"\n";
	print(v);

	for(i=0;i<v.size();i++)
	{
		v[i]=toupper(v[i]);
	}
	cout<<"\n Toupper size of vector "<<v.size();
	cout<<"\n";

	print(v);

	return 0;
}

template<class type>
void print(type t)
{
	uint i=0;
	for(i=0;i<t.size();i++)
	{
		cout<<t[i];
	}

}
