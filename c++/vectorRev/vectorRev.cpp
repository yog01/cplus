/*
 * vectorRev.cpp
 *
 *  Created on: 3 Oct 2021
 *      Author: yo
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class type>
void disp(type t);

int main()
{
	vector<int> v1;

	for(int i=0;i<10;i++)
	{
		v1.push_back(i);
	}

	disp(v1);

	reverse(v1.begin(), v1.end());

	disp(v1);



	return 0;
}

template <class type>
void disp(type t)
{
	vector<int>::iterator p=t.begin();

	while(p!=t.end())
	{
		cout<<" "<<*p;
		p++;
	}
	cout<<"\n";
}
