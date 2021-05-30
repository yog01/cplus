/*
 * multiplebaseclass.cpp
 *
 *  Created on: 28 May 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class branch1{
protected:
	int i;
public:
	void showi()
		{
			cout<<"\n value i"<<i;
		}
};
class branch2{
protected:
	int j;
public:
	void showj()
		{
			cout<<"\n value j"<<j;
		}
};
class stem:public branch1, public branch2{ //bscause of public inheritance
public:
	void set(int x, int y){
		i=x;
		j=y;
	}

};
int main()
{
	stem ob;
	ob.set(20,10);
	ob.showi();
	ob.showj();

	return 0;
}
