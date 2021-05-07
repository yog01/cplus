/*
 * functionoverload.cpp
 *
 *  Created on: 2 May 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

int ad_d(int x, int y);
int ad_d(float x, float y);

int main()
{
	int c,i=2,j=3;
	float f,a=1.2,b=1.4;

	c=ad_d(i,j);
	f=ad_d(a,b);

	cout<<"\n float sum "<<f<<"\n interger"<<c;

	return 0;
}

int ad_d(int x, int y)
{
	return x+y;
}
int ad_d(float x, float y)
{
	return x+y;
}
