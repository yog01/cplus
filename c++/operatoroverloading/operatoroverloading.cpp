/*
 * operatoroverloading.cpp
 *
 *  Created on: 13 May 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class objadd{
	int a,b;
public:
	objadd(){
		a=0;
		b=0;
	}
	objadd(int x,int z):a(x),b(z){

	}
	objadd operator+(objadd ob2);
	void show()
	{
		cout<<"\n value of a"<<this->a;
		cout<<"\n value of b"<<this->b;
	}
};

objadd objadd::operator+(objadd ob2)
{
	objadd temp;
	temp.a=this->a+ob2.a;
	temp.b=this->b+ob2.b;
	return temp;
}

int main()
{

	objadd ob1(5,5),ob2(4,4);

	ob1.show();
	ob2.show();

	ob1=ob1+ob2;
	ob1.show();

	return 0;
}
