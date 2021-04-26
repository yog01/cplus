/*
 * refranceswap.cpp
 *
 *  Created on: 26 Apr 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class swape{
	int i;
	int a,b;
public:
	swape(int x, int y, int z):i(x),a(y),b(z){
		cout<<"constructor "<<i;
	}
	~swape()
	{
		cout<<"\n destructor"<<i;
	}
	void change(swape &ob);
};

void swape::change(swape &ob)
{
	int t;
	t=ob.a;
	ob.a=ob.b;
	ob.b=t;
	cout<<"\na "<<ob.a<<"\nb "<<ob.b;
}
int main()
{
	swape ob(1,10,20); //copy constructor iis not called work on actual ob

	ob.change(ob);


	return 0;
}
