/*
 * subscriptoperatoroverloading.cpp
 *
 *  Created on: 20 May 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class array{
	int a[3];
public:
	array(int x, int y, int z=1){
		a[0]=x;
		a[1]=y;
		a[2]=z;
	}
	int operator[](int i)
	{
		return a[i];
	}
};
int main()
{
	array  ob(1,2);

	cout<<"value of array [2] in ob object"<<ob[2];

	return 0;
}
