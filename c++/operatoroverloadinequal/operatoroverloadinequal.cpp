/*
 * operatoroverloadin=.cpp
 *
 *  Created on: 14 May 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class loc{
	int a,b;
public:
	loc(){
		a=0;
		b=0;
	}
	loc(int x, int y):a(x),b(y){

	}
	void show()
	{
		cout<<"value of a"<<a<<"\n";
		cout<<"value of b"<<b<<"\n";
	}
	loc operator++();
	loc operator+(loc ob2);
	loc operator-(loc ob2);
	loc operator=(loc ob2);
};

loc loc::operator++()
{
	a++;
	b++;
	return *this;
}
loc loc::operator=(loc ob2)
{
	a=ob2.a;
	b=ob2.b;
	return *this;
}

loc loc::operator+(loc ob2)
{
	loc temp;
	temp.a=a+ob2.a;
	temp.b=b+ob2.b;
	return temp;
}
loc loc::operator-(loc ob2)
{
	loc temp;
	temp.a=a-ob2.a;
	temp.b=b-ob2.b;
	return temp;
}
int main()
{
	loc ob1(5,5),ob2(10,10),ob3(15,15);

	ob1.show();
	cout<<"\n";
	ob2.show();
	cout<<"\n";
	++ob1;

	ob1.show();
	cout<<"\n";
	ob1=ob1+ob2;

	ob1.show();
	cout<<"\n";
	ob1=ob1-ob2;

	ob1.show();
	cout<<"\n";
	cout<<"\n";
	ob1=ob2=ob3;
	ob1.show();
	cout<<"\n";
	ob2.show();
	cout<<"\n";
	return 0;
}
//left hand object invoke overload function
