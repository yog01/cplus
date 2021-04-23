/*
 * pointertoclassmember.cpp
 *
 *  Created on: 23 Apr 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class pointerclassmember{
public:
	int i;
	pointerclassmember(int x):i(x){

	}
	int get_i();
};
int pointerclassmember::get_i(){
	return i;
}
int main()
{
	pointerclassmember ob(10),ob1(20);
	pointerclassmember *p,*p1;
	int *pv;
	int pointerclassmember::*data;
	int (pointerclassmember::*fun)();

	data=&pointerclassmember::i; //genric call to all object
	fun=&pointerclassmember::get_i;

	p=&ob;
	p1=&ob1;

	pv=&ob.i;

	cout<<"\n call by object ob value  "<<ob.*data;
	cout<<"\n call by object ob1 value "<<ob1.*data;
	cout<<"\n call by object ob fun "<<(ob.*fun)();
	cout<<"\n call by object ob1 fun "<<(ob1.*fun)();

		cout<<"\n call by pointer to object value "<<p->*data;
		cout<<"\n call by pointer to object ob1 value "<<p1->*data;
		cout<<"\n call by pointer to object ob fun "<<(p->*fun)();
		cout<<"\n call by pointer to object ob1 fun "<<(p1->*fun)();

		cout<<"\n dependent on ob value "<<*pv;

	return 0;
}
