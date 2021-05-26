/*
 * protectedacessspecifier.cpp
 *
 *  Created on: 26 May 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class base{
protected:
	int i,j;
public:
	void set(int x, int y)
	{
		i=x;
		j=y;
	}
	void show()
	{
		cout<<"\n value of i"<<i;
		cout<<"\n value of j"<<j;
	}
};
class derived1: public base{
	int k;
public:
	void setadd()
	{
		k=i+j;
	}
	void showadd()
	{
		cout<<"\n value od addition"<<k;
	}

};

class derived2: public derived1{
	int o;
public:
	void setmin(){
		o=i-j;
	}
	void showmin()
	{
		cout<<"\n value od sub"<<o;
	}
};
int main(int argc, char **argv) {

	derived2 ob2;
	ob2.set(5, 5);
	ob2.show();

	ob2.setadd();
	ob2.showadd();

	ob2.setmin();
	ob2.showmin();

	return 0;
}

