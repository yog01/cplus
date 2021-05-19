/*
 * freiendoperatoroverload.cpp
 *
 *  Created on: 15 May 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;
class operatore{
	int a,b;
public:
	operatore(){a=0;b=0;}
	operatore(int x,int y):a(x),b(y){

	}
	friend operatore operator++(operatore &tob);
	friend operatore operator+(operatore &tob,operatore &tob1);
	void show()
	{
		cout<<"\n value of a"<<a;
		cout<<"\n value of b"<<b;
	}
};

operatore operator++(operatore &tob) //pre
{
	tob.a++;
	tob.b++;
	return tob;
}
operatore operator+(operatore &tob,operatore &tob1) //refrance is must when oppertor is oveloaded using friend
{
	operatore temp;
	temp.a=tob.a+tob1.a;
	temp.b=tob.b+tob1.b;
	return temp;
}
int main()
{
	operatore ob1(5,5),ob2(10,10);

	++ob1;
	ob1.show();

	ob1=ob1+ob2;
	ob1.show();
	return 0;
}
//freiend dont have this pointer so by call by refrance passing original object and it is modified.
