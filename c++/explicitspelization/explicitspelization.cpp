/*
 * explicitspelization.cpp
 *
 *  Created on: 14 Jul 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

template <class num>
class myclass{
	num a;
public:
	myclass(num b):a(b){
		cout<<"\nInside genric template class";
	}
	num get()
	{
		return a;
	}
};

template<>
class myclass<int>{
	int b;
public:
	myclass(int a):b(a){
		cout<<"\nInside spelized myclass <int> class";
	}
	int get()
	{
		return b;
	}
};
int main()
{
	myclass<double> dob(10.2);
	cout<<dob.get();
	myclass<int> iob(2);
	cout<<iob.get();


	return 0;
}
