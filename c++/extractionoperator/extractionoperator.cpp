/*
 * extractionoperator.cpp
 *
 *  Created on: 17 Aug 2021
 *      Author: yo
 */
#include <iostream>
#include <cstring>

using namespace std;

class emp{
	int no;
	char name[20];
public:
	emp(){

	}
	emp(char s[],int n)
	{
		memset(name,0,sizeof(name));
		memcpy(name,s,strlen(s));
		no=n;
	}
	friend ostream &operator<<(ostream &strm, emp e);
	friend istream &operator>>(istream &strm, emp &e);
};

ostream &operator<<(ostream &strm, emp e)
{
	strm<<"number\n"<<e.no;
	strm<<"name\n"<<e.name;
	return strm;
}

istream &operator>>(istream &strm, emp &e)
{
	cout<<"enter name\n";
	strm>>e.name;
	cout<<"enter no\n";
	strm>>e.no;
	return strm;
}
int main()
{
    emp ob;
    cin>>ob;
    cout<<ob;
	return 0;
}
