/*
 * basetoderiveconsvirtual.cpp
 *
 *  Created on: Mar 17, 2022
 *      Author: ubuntu
 */
#include <iostream>
using namespace std;
class base{
	int a;
public:
	base(int i):a(i){

	}
	virtual void disp()
	{
		cout<<"disp 1 "<<a<<"\n";
	}
	virtual void disp1()
	{
		cout<<"disp 2\n";
	}
};

class derived : public base{
	int b;
public:
		derived(int i, int j):base(i),b(j){

		}
		void disp1()
		{
			cout<<"disp 2 in derived\n";
		}
};


int main()
{
	base *obb;
	derived obd(10,20);
	obb=&obd;
	obb->disp();

	obb->disp1();

	return 0;
}
