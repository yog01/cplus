/*
 * Nontypegenricclass.cpp
 *
 *  Created on: 12 Jul 2021
 *      Author: yo
 */
// template size of array as parameter
#include <iostream>
using namespace std;

template<class array_type,int size>
class Array{
	array_type arr[size];
	int i;
public:
	Array()
	{
		for(i=0;i<size;i++)
		{
			arr[i]=i;
		}
	}
	array_type &operator[](int i);
};

template<class array_type, int size> // sizze be used as parameter inside function
array_type &Array<array_type,size>::operator[](int i)
{
	if(i<0 || i>size)
	{
		cout<<"\nout of bound";
		exit(0);
	}
	return arr[i];
}
int main()
{
	Array<int,10> intob;
	int i;
	for(i=0;i<10;i++)
	{
		intob[i]=i;
	}
	for(i=0;i<10;i++)
	{
		cout<<intob[i];
	}

	intob[20]=100;

	return 0;
}
