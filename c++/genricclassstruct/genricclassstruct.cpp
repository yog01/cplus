/*
 * genricclassstruct.cpp
 *
 *  Created on: 10 Jul 2021
 *      Author: yo
 */
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct city_ele{
	char name[10];
	int number;
};

template<class g_type>
class city{
public:
	city()
	{

	}
	void input(g_type &ob);
	void display(g_type &ob);
};

template<class g_type> void city<g_type>::input(g_type &ob)
{
	char str[10]="USA";
	memset(ob.name,NULL,sizeof(ob.name));
	memcpy(ob.name,str,sizeof(str));
	ob.number=10;
}

template<class g_type> void city<g_type>::display(g_type &ob)
{
	cout<<"\nName:"<<ob.name;
	cout<<"\nNumber:"<<ob.number;
}

int main()
{
	struct city_ele c1;
	city<city_ele> c2;

	c2.input(c1);
	c2.display(c1);
	return 0;
}
