/*
 * newoperatoroverload.cpp
 *
 *  Created on: 17 May 2021
 *      Author: yo
 */
#include <iostream>
#include <cstring>
#include <new>
using namespace std;

class opnew{
	int a,b;
public:
	opnew(int x, int y):a(x),b(y){

	}

	void show()
	{
		cout<<"\n value of a"<<a;
		cout<<"\n value of b"<<b;
	}

	void* operator new(size_t size);
	void operator delete(void *p);
};

void* opnew::operator new(size_t size)
{
	void *p;
	bad_alloc ea;

	p=malloc(sizeof(size)); //automatic find meory size
	if(!p)
	{
		cout<<"\nmemory alloc failed"<<ea.what();
	}
	return p;
}

void opnew::operator delete(void *p)
{
	free(p);
}
int main()
{
	opnew *p1,*p2;

	try{
		p1=new opnew(10,20); //size of opnew and adress of opnew
	}catch (bad_alloc e) {
		cout<<"memory allocaation failed"<<e.what();
	}

	try{
			p2=new opnew(-10,-20);
		}catch (bad_alloc e) {
			cout<<"memory allocaation failed"<<e.what();
		}

		p1->show();
		p2->show();

		delete(p1);
		delete(p2);

	return 0;
}
