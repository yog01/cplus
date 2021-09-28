/*
 * mapobj.cpp
 *
 *  Created on: 27 Sep 2021
 *      Author: yo
 */
#include <iostream>
#include <map>
#include <cstring>
using namespace std;

class phname{
	char str[40];
public:
	phname()
	{
		strcpy(str,"");
	}
	phname(char *s)
	{
		strcpy(str,s);
	}
	char *get()
	{
		return str;
	}
};

class phno{
	char str[40];
public:
	phno()
		{
			strcpy(str,"");
		}
		phno(char *s)
		{
			strcpy(str,s);
		}
		char *get()
		{
			return str;
		}
};
bool operator<(phname a, phname b)
{
	return strcmp(a.get(),b.get())<0;
}
int main()
{
	char str[20];
	map<phname,phno> directory;
	map<phname,phno>::iterator p;

	directory.insert(pair<phname,phno>(phname("ram"),phno("1223")));
	directory.insert(pair<phname,phno>(phname("sham"),phno("1443")));
	directory.insert(pair<phname,phno>(phname("mohan"),phno("66663")));

	cout<<"enter the name";
	cin>>str;

	p=directory.find(str);

	if(p!=directory.end())
	{
		cout<<"no is"<<p->second.get();
	}
	else
	{
		cout<<"Not in directory";
	}

	return 0;
}
