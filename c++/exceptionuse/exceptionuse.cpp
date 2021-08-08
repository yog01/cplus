/*
 * exceptionuse.cpp
 *
 *  Created on: 5 Aug 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class excp{
	int a,b;
public:
	excp(int c, int d):a(c),b(d){

	}
	void divide(double e,double f);
};
void excp::divide(double e, double f)
{
	try{
		if(!f)
			throw f;
		else
			cout<<"\ndivision is="<<e/f;
	}catch (double  e) {
		cout<<"\ndivide by zerro";
	}
}
int main()
{
	excp ob(2,3);
	ob.divide(4, 5);
	ob.divide(4, 0);

	return 0;
}
