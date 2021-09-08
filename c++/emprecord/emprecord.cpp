/*
 * emprecord.cpp
 *
 *  Created on: 1 Sep 2021
 *      Author: yo
 */
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class emp{
	int salary;
	char name[20];
public:
	emp(){

	}
	emp(char n[],int s){
		memset(name,'\0',sizeof(name));
		memcpy(name,n,strlen(n));
		salary=s;
	}

	friend ostream &operator<<(ostream &stream, emp e); // use refrance
	friend istream &operator>>(istream &stream, emp &e); // workon stream
};
//display enter
ostream &operator<<(ostream &stream, emp e)
{
	stream<<"employ name is";
	stream<<e.name;
	stream<<"employ salary is";
	stream<<e.salary;

	return stream;
}
//input
istream &operator>>(istream &stream, emp &e)
{
	cout<<"enter emp name";
	stream>>e.name;
	cout<<"enter number";
	stream>>e.salary;

	return stream;
}

int main(){

	int i;
	char disp;
	emp e;
	fstream file("tst",ios::in|ios::out|ios::binary);

	if(!file)
	{
		cout<<"unable to open file";
		exit(0);
	}
	while(1){

	do{
		cout<<"1.enter emp details";
		cout<<"2.disply emp details";
		cout<<"3.exit";
		cin>>i;
	}while(!(i>0 && i<3));

	switch(i){
	case 1:
		cin>>e;
		file<<e;
		break;
	case 2:
		file.seekg(0,ios::beg);
		while(!file.eof())
		{
			file.get(disp);
			cout<<disp;
		}
		break;
	case 3:
		file.close();
		break;

	default:
		cout<<"not valid input";
		exit(0);
		break;

	}
	}
	return 0;
}
