/*
 * vecfunObj.cpp
 *
 *  Created on: 8 Oct 2021
 *      Author: yo
 */
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

using namespace std;

class divdd: unary_function<float,float>{
public:
	result_type operator()(argument_type i)
	{
		return i/10;
	}
};

int main(int argc, char **argv) {

	vector<double> v1;
	vector<double>::iterator p;
	int i=0;

	for(i=0;i<10;i++)
	{
		v1.push_back(i);
	}

	for(p=v1.begin();p!=v1.end();p++)
	{
		cout<<*p;
	}

	transform(v1.begin(), v1.end(), v1.begin(), divdd());
	for(p=v1.begin();p!=v1.end();p++)
	{
		cout<<*p;
	}
	return 0;
}

