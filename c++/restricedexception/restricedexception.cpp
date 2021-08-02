/*
 * restricedexception.cpp
 *
 *  Created on: 21 Jul 2021
 *      Author: yo
 */
/* in this program, the function fun() may only throw integer,
 * character, and double exception. If it attempts to thro any
 * other type of exception, and abnormal program terination will
 * occur. (That is, unexpectedd() will be called.)
 * */
#include <iostream>
using namespace std;

void fun(int i)throw(int,char,double) //depricated in c++11
{
	if(i==0)
	{
		throw i;
	}else if (i==1) {
		throw 'a';
	}else if (i==2) {
		throw 10.2;
	}
}
int main()
{
	try{
		fun(3);
	}catch (int i) {
		cout<<"caught integer exception\n"<<i;
	}catch (char a) {
		cout<<"caught char exception\n"<<a;
	}catch (double d) {
		cout<<"caught double exception\n"<<d;
	}

	return 0;
}
