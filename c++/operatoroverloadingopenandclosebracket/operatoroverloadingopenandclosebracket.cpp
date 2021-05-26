/*
 * operatoroverloadingopenandclosebracket.cpp
 *
 *  Created on: 23 May 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class bracket{
	int a,b;
public:
	bracket(){

	}
	bracket(int x, int y):a(x),b(y){

	}

	bracket operator+(bracket ob2); //member function
	bracket operator()(int i, int j);

	void show()
	{
		cout<<"\n value of a"<<a;
		cout<<"\n value of b"<<b;
	}
};

bracket bracket::operator+(bracket ob2){
	bracket temp;
	temp.a=a+ob2.a;
	temp.b=b+ob2.b;
	return temp;
}
bracket bracket::operator()(int i, int j){
	this->a=i;
	this->b=j;
	return *this;
}
int main()
{

	bracket ob(1,1),ob2(2,2);

	ob.show();

	ob(2,2);

	ob.show();

	ob=ob+ob2(4,4);

	ob.show();

	return 0;
}
