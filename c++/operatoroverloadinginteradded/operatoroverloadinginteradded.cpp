/*
 * operatoroverloadinginteradded.cpp
 *
 *  Created on: 17 May 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class intadd{
	int a,b;
public:
	intadd(){
		a=0;
		b=0;
	}
	intadd(int x,int y):a(x),b(y){

	}
	friend intadd operator+(intadd ob,int x);
	friend intadd operator+(int x,intadd ob);
	void show()
	{
		cout<<"\nvalue of a"<<a;
		cout<<"\nvalue of b"<<b;
	}
};
intadd operator+(intadd ob,int x)
{
	intadd temp;

	temp.a=ob.a+x;
	temp.b=ob.b+x;

	return temp;
}
intadd operator+(int x,intadd ob)
{
	intadd temp;

	temp.a=x+ob.a;
	temp.b=x+ob.b;

	return temp;
}
int main()
{
	intadd binob1(5,5),binob2(10,10);

	binob1=binob1 +100;
	binob1.show();

	binob2=100+binob2;
	binob2.show();
}
