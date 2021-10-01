/*
 * vectorCoutIf.cpp
 *
 *  Created on: 29 Sep 2021
 *      Author: yo
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool div3(int i)
{
	if((i%3)==0)
		return true;
	else
		return false;
}

int main()
{
	vector<int> v;
	uint8_t i;
	int j;
	for (i = 0; i < 10; ++i) {
		v.push_back(i);
	}

	for (i = 0; i < v.size(); ++i) {
		cout<<v[i]<<"\n";
	}

	j=count_if(v.begin(), v.end(),div3);
	cout<<"divisible by "<<j;
	return 0;
}
