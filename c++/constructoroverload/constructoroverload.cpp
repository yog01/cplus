/*
 * constructoroverload.cpp
 *
 *  Created on: 3 May 2021
 *      Author: yo
 */
#include <iostream>
#include<new>
using namespace std;

class power{
	int value;
public:
	power()
	{
		value=0;
	}
	power(int x)
	{
		value=x;
	}
	void set_t(int x)
	{
		value=x;
	}
	int get_t()
	{
		return value;
	}
};
int main()
{
	power pow_2[3]={1,2,4};
	power pow_3[3];
	power *apow_2;

	for(int i=0;i<3;i++)
	{
		cout<<"\n power of 2"<<pow_2[i].get_t();
	}

	pow_3[0].set_t(1);
	pow_3[1].set_t(3);
	pow_3[2].set_t(6);

	for(int i=0;i<3;i++)
	{
		cout<<"\n power of 3"<<pow_3[i].get_t();
	}

	try{
		apow_2=new power[3];
	}
	catch (bad_alloc &e) {
		cout<<"stack overflow"<<e.what();
	}

	for(int i=0;i<3;i++)
	{
		apow_2[i].set_t(pow_2[i].get_t());
	}
	for(int i=0;i<3;i++)
	{
		cout<<"\n array of abject power"<<apow_2[i].get_t();
	}
	return 0;
}
