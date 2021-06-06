/*
 * virtualfunc.cpp
 *
 *  Created on: 4 Jun 2021
 *      Author: yo
 */
//pointer contains derived class that class fuction are called
//virtual function are single interface mutiple defination.
//virtual cnnot be ferind.
//remove virtual and typecast pointer of base object to derived class to call derived functions.
//((rec *)ob)->show();
#include <iostream>
using namespace std;

class square{
protected:
	int length,areasq;
public:
	square(){}
	square(int x):length(x){

	}
	virtual void area(){
		areasq=length*length*length;
	}
	virtual void show()
	{
		cout<<"\n area of squar"<<areasq;
	}
};
class rec:public square{
protected:
	int breath,height,arearec;
public:
	rec(int x,int y, int z):square(x),breath(y),height(z){

	}
	void area()
	{
		arearec=length*breath*height;
	}
	void show()
	{
		cout<<"\n area of rec"<<arearec;
	}
};
int main()
{

	square *ob, obs(10);
	rec obr(10,20,30);


	ob=&obr;

	ob->area();
	ob->show();




	ob=&obs;

	ob->area();
	ob->show();
	((rec *)ob)->show(); //derived if don use virtual in base call


	return 0;
}
