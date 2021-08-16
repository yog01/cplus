/*
 * overload<<.cpp
 *
 *  Created on: 13 Aug 2021
 *      Author: yo
 */
//friend is not member function of class
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstring>

using namespace std;

class over{
	char name[20];
	int id;
public:
	over(char *n,int i)
	{
		memset(name,0,sizeof(name));
		memcpy(name,n,strlen(n));
		id=i;
	}
	friend ostream &operator<<(ostream &s,over o);
};

ostream &operator<<(ostream &s,over o) //overloaded stream
{
	s<<"name is:"<<o.name;
	s<<"\n"<<"id"<<o.id;

	return s;
}
int main()
{
	over ob("ram",1),ob2("sham",2);
	cout<<ob<<" \n"<<ob2;

	return 0;
}
