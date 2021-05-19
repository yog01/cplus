/*
 * operatoroverloadarrayofobject.cpp
 *
 *  Created on: 19 May 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class array{
	int a,b;
public:
	array(){
		a=b=0;
	}
	array(int x, int y):a(x),b(y){

	}
	void *operator new[](size_t size);
	void operator delete (void *p);
	void *operator new(size_t size);
	void operator delete[](void *p);
	void set(int x,int y){
		a=x;
		b=y;
	}
	void show(){
			cout<<"\n value of a"<<a;
			cout<<"\n value of b"<<b;
		}
};
void* array::operator new[](size_t size){
	void *p;
	cout << "Using overload new[].\n";
	p=malloc(size);
	if(!p)
	{
		bad_alloc a;
		throw a;
	}
	return p;
}
void array::operator delete(void *p)
{
	cout << "In overloaded delete.\n";
	free(p);
}
void* array::operator new(size_t size)
{

	void *p;
	cout << "In overloaded new.\n";
		p=malloc(size);
		if(!p)
		{
			bad_alloc a;
			throw a;
		}
		return p;
}
void array::operator delete[](void *p)
{
	cout << "Freeing array using overloaded delete[]\n";
	free(p);
}
int main()
{
	array *p1,*p2;

	try {
		p1=new array(10,20);
	} catch (bad_alloc e) {
		cout<<"memory allocation fail"<<e.what();
		return 1;
	}

	try {
		p2=new array[2];
	} catch (bad_alloc e) {
		cout<<"memory allocation fail"<<e.what();
		return 1;
	}

	p1->show();

	p2[0].set(100, 200);
	p2[1].set(1000, 2000);

	p2[0].show();
	p2[1].show();

	delete p1;
	delete [] p2;

	return 0;
}
