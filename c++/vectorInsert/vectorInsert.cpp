/*
 * vectorInsert.cpp
 *
 *  Created on: 10 Sep 2021
 *      Author: yo
 */
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

template<class type>
void display(type v);

int main()
{
	vector<char> v(10);
	vector<char>::iterator p;
	vector<char> v2;
	unsigned char ins[3]="HI";
	int i=0;
	p=v.begin();
	while(p!=v.end())
	{
		*p=(i+'a');
		i++;
		p++;
	}
	for(i=0;ins[i];i++)
	{
		v2.push_back(ins[i]);
	}
	display(v);
	cout<<"\n";
	p=v.begin();
	v.erase(p+2, p+4);
	v.insert(p+2, 2, 'x');
	v.erase(p+2, p+4);
	v.insert(p+2,v2.begin(),v2.end());
	//after operatin initializie iterator with begin();
	display(v);


	return 0;
}

template<class type>
void display(type v)
{
	vector<char>::iterator p;
	p=v.begin();
	while(p!=v.end())
		{
			cout<<*p;
			p++;
		}
}
