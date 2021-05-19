/*
 * globaloperatoroverload.cpp
 *
 *  Created on: 18 May 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class gop{
	int a,b;
public:
	gop(){
		a=0;
		b=0;
	}
	gop(int x, int y):a(x),b(y){

	}
	void show(){
		cout<<"\n value of a"<<a;
		cout<<"\n value of b"<<b;
	}
};
void *operator new(size_t size)
{
	void *p;
	p=malloc(size);
	if(!p)
	{
		bad_alloc a;
		throw a;
	}
	return p;
}
void operator delete(void *p)
{
	free(p);
}
int main()
{

	gop *p1,*p2;
	float *f;

	try {
		p1=new gop(10,20);
	} catch (bad_alloc e) {
		cout<<"not ablle to aalocate p1"<<e.what();
		return 1;
	}

	try {
		p2=new gop(100,200);
	} catch (bad_alloc e) {
		cout<<"not ablle to aalocate p2"<<e.what();
		return 1;
	}

	try {
		f=new float;
	} catch (bad_alloc e) {
		cout<<"not ablle to aalocate float"<<e.what();
		return 1;
	}

	*f=1000;

	p1->show();
	p2->show();

	cout<<"\n float value"<<*f;

	delete(p1);
	delete(p2);
	delete(f);
	return 0;
}
