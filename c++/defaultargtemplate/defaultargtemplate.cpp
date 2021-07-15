/*
 * defaultargtemplate.cpp
 *
 *  Created on: 13 Jul 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

template <class type=int, int size=10>
class Array{
	type a[size];
public:
	Array()
	{
		for(int i=0;i<10;i++)
			a[i]=i;
	}
	type &operator[](int i);
};

template <class type, int size> //no need to specify default argument to function call
type &Array<type, size>::operator[](int i)//subscript variable will be passed
{
	if(i<0 || i>size)
	{
		cout<<"\nout of bound";
		exit(1);
	}
	return a[i];
}

int main()
{
	Array<float,20> fobj;
	Array<> nobj;
	for(int i=0;i<10;i++)
	{
		fobj[i]=i+0.2;
	}
	for(int i=0;i<10;i++)
	{
		cout<<fobj[i];
	}
	cout<<"\n";
	for(int i=0;i<10;i++)
	{
		nobj[i]=i;
	}
	for(int i=0;i<10;i++)
	{
		cout<<nobj[i];
	}
	return 0;
}

