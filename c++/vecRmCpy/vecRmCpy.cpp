/*
 * vecRmCpy.cpp
 *
 *  Created on: 1 Oct 2021
 *      Author: yo
 */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template <class type>
void disp(type t);

int main()
{
	char str[20]={"HI my name is"};
	vector<char> v1,v2(30); //specify size
	int i=0;
	for(i=0;str[i];i++)
	{
		v1.push_back(str[i]);
	}

	disp(v1);
	remove_copy(v1.begin(), v1.end(), v2.begin(), ' '); //character ' '
	disp(v2);

	replace_copy(v1.begin(), v1.end(), v2.begin(), ' ', ':');
	disp(v2);

	return 0;
}
template <class type>
void disp(type t)
{
	vector<char>::iterator p=t.begin();

	while(p!=t.end())
	{
		cout<<*p;
		p++;
	}
	cout<<"\n";
}
