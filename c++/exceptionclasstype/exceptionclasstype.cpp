/*
 * exceptionclasstype.cpp
 *
 *  Created on: 18 Jul 2021
 *      Author: yo
 */
#include <iostream>
#include <string.h>
using namespace std;

class myexception{
	char str[10];
	int num;
public:
	myexception()
	{
		*str=0;
		num=0;
	}
	myexception(char temp[],int i)
	{
		memcpy(str,temp,strlen(temp)); //use strlen
		num=i;
	}
	char* name()
	{
		return str;
	}
	int number()
	{
		return num;
	}
};

int main()
{
	int value;
	char str[10]="nega\n";

	try {
		cout<<"Enter the no\n";
		cin>>value;
		if(value<0)
		{
			throw myexception(str,value);
		}

	} catch (myexception e) { //use the object of that class display expcetion.
		cout<<e.name();
		cout<<e.number();
	}
	cout<<"\nEND";

	return 0;
}
