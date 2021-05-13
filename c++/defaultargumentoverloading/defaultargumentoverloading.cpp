/*
 * defaultargumentoverloading.cpp
 *
 *  Created on: 10 May 2021
 *      Author: yo
 */
#include <iostream>
#include <cstring>
using namespace std;

void mystrcat(char *s1, char *s2, int len=-1); //defalut argument can be given at function protoype

int main()
{

	char myname[20]="yogit";
	char mybroname[20]="mohit";

	mystrcat(myname,mybroname,2);
	cout<<"\n concateneteed by 2"<<myname;
	mystrcat(myname,mybroname);
	cout<<"\n concateneteed"<<myname;


	return 0;
}

void mystrcat(char *s1, char *s2, int len)
{
	while(*s1)
		s1++;

	if(len==-1)
		len=strlen(s2);

	while(*s2 && len)
	{
		*s1=*s2;
		s1++;
		s2++;
		len--;
	}
	*s1='\0';
}
