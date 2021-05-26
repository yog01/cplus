/*
 * subscriptoeratoroverloadarrayindexcheck.cpp
 *
 *  Created on: 22 May 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class array{
	int a[3];
public:
	array(int x, int y, int z)
	{
		a[2]=z;
		a[1]=y;
		a[0]=x;
	}
	int &operator[](int i);
};
int &array::operator[](int i)
{
	if(i<0||i>2)
	{
		cout<<"\nout of index";
		exit(1);
	}
	return a[i];
}
int main()
{

	array ob(1,2,3);

	cout<<"\nvalue ob array[1]"<<ob[1];

	ob[1]=5;

	cout<<"\nvalue ob array[1]"<<ob[1];

	ob[3]=4;
	return 0;
}
