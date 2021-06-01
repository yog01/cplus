/*
 * conaddescallinhritance.cpp
 *
 *  Created on: 31 May 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class base1{
protected:
	int i;
public:
	base1(int x):i(x){

	}
};
class base2{
protected:
	int j;
public:
	base2(int y):j(y){

	}
};
class derived: public base1, public base2{
	int k;
public:
	derived(int x, int y, int z):base1(x),base2(y),k(z){
		k=x+y;
	}
	void show(){
	cout <<"\n vlaue of i"<<i;
	cout <<"\n vlaue of j"<<j;
	cout <<"\n vlaue of k"<<k;
	}
};
int main()
{
	derived ob(2,3,4);

	ob.show();

	return 0;
}
