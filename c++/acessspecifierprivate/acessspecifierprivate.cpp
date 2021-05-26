/*
 * acessspecifierprivate.cpp
 *
 *  Created on: 26 May 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class base{
protected:
	int i;
public:
	base(){}
	base(int x):i(x){

	}
	void show(){
		cout<<"\n value"<<i;
	}
};
class derived: private base{
public:
	derived(){}
	void change(int x){
		i=x;
	}
	void showk(){
			cout<<"\n value"<<i;
	}
};

int main()
{
	base ob1(5);
	derived ob;
	ob1.show();
	ob.change(10);
	ob.showk();
	return 0;
}
