/*
 * map.cpp
 *
 *  Created on: 23 Sep 2021
 *      Author: yo
 */
#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<char,int> m;
	map<char,int>::iterator p;
	int i;
	char ch;
	for(i=0;i<26;i++)
		m.insert(pair<char,int>('A'+i,65+i));

	cout<<"enter a character\n";
	cin>>ch;

	p=m.find(ch);
	if(p!=m.end())
	cout<<"asci value"<<p->second;
	else
		cout<<"not a valid char";

	return 0;
}
