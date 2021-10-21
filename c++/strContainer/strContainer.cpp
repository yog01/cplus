/*
 * strContainer.cpp
 *
 *  Created on: 21 Oct 2021
 *      Author: yo
 */
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	map<string,string> dire;
	//char ser[10];
	string ser;
	map<string,string>::iterator p;
	dire.insert(pair<string,string>("rohan","12"));
	dire.insert(pair<string,string>("rohi","1233"));
	dire.insert(pair<string,string>("ram","11222"));

	cout<<"Enter the name";
	cin>>ser;

	p=dire.find(ser);

	if(p!=dire.end())
	{
		cout<<"no is"<<p->second;
	}
	else
	{
		cout<<"not in list";
	}

	return 0;
}
