/*
 * protectedacessspecifier.cpp
 *
 *  Created on: 27 May 2021
 *      Author: yo
 */
//prtected call explitily function inherited by base(protected) and in private fn wont come both create object of derived in main

#include <iostream>
using namespace std;

class base{
protected:
	int i;
public:
	void setv(int x){
		i=x;
	}
	void show()
	{
		cout<<"\n value of i"<<i;
	}

};
class derived :protected base{
public:
	void setvd(int h){
		setv(h);
	}
	void showvd()
	{
		show();
	}

};
/*
 * class derived :protected base{
 * protected:
	int i;
	void setv(int x){
		i=x;
	}
	void show()
	{
		cout<<"\n value of i"<<i;
	}
 *
	public:
	void setvd(int h){
		setv(h);
	}
	void showvd()
	{
		show();
	}

};
*/


int main(){

	derived ob;

	ob.setvd(10);
	ob.showvd();

	return 0;
}
