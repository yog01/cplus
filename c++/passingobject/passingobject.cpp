/*
 * passingobject.cpp
 *
 *  Created on: 16 Apr 2021
 *      Author: yo
 */

#include <iostream>

using namespace std;

class myclass{
	int a;
public:
	myclass(int i)
	{
		cout<<"object constructor called "<<i<<"\n";
		a = i;
	}
	~myclass()
	{
		cout<<"object destroyed "<<a<<"\n";
	}
	void set(int i)
	{
		a=i;
	}
	int get()
	{
		return a;
	}
};

void fun(myclass ob)
{
	ob.set(2);
	cout<<"in func object2 copy constructor called a value local"<<ob.get()<<"\n";

}

int main(int argc, char **argv) {

	myclass c(1);
	fun(c);
	cout<<"obj1 a value in main "<<c.get()<<"\n";
	return 0;
}

