/*
 * copyconstructor.cpp
 *
 *  Created on: 4 May 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class array{
	int *p;
	int size = 0;
public:

	array(int sz):size(sz)
	{
		//size=sz;
		try{
			p=new int[sz]; //aynamic array of size 9*4
		}catch(bad_alloc &e)
		{
			cout<<"memory allocation failed"<<e.what();
		}
	}
	array(const array &a);
	void set_t(int i, int j)
	{
		if(i>=0 && i<size)
		{
			p[i]=j;
		}
	}
	int get_t(int i)
	{
		return p[i];
	}
	~array()
	{
		delete []p;
	}
};
array::array(const array &a)
{
	try{
		p=new int[a.size];
	}catch(bad_alloc &e)
	{
		cout<<"memory allocation failed"<<e.what();
	}
	for(int i=0;i<a.size;i++)
	{
		p[i]=a.p[i];
	}
}
int main()
{
	array num(9);

	for(int i=0;i<9;i++)
	{
		num.set_t(i, i);
	}
	for(int i=0;i<9;i++)
	{
		cout<<"\n array of object"<<num.get_t(i);
	}
	array x(num);
	for(int i=0;i<9;i++)
	{
		cout<<"\n copy constructor array of object"<<x.get_t(i);
	}

	return 0;
}
