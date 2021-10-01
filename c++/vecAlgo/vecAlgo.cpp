/*
 * vecAlgo.cpp
 *
 *  Created on: 28 Sep 2021
 *      Author: yo
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
template<class type>
int coun_t(type t);
int main()
{
	vector<bool> vec;
	int i;

	i=coun_t(vec);
	cout<<"no of true"<<i;


	return 0;
}
template<class type>
int coun_t(type t)
{
	int i,cot;
	for(i=0;i<10;i++)
	{
		if(rand()%2)
			t.push_back(true);
		else
			t.push_back(false);
	}

	for(i=0;i<10;i++)
	{
		cout<<boolalpha<<t[i]<<"\n";
	}

	cot=count(t.begin(), t.end(), true);
	return cot;
}
