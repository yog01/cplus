/*
 * functionpointeroverload.cpp
 *
 *  Created on: 7 May 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class Area{
public:
	int length;
	Area(int a):length(a)
	{
	}
	int area_square();
};
int Area::area_square()
{
	return length*length*length;
}

class Area1{
public:
	int length, breath;
	Area1  (int a,int b):length(a),breath(b)
	{
	}
	int area_rec()
	{
		return length*breath;
	}
};

int main()
{
	Area ob(10);
	Area1 ob1(10,20);
	int (Area::*fp)();
	int (Area1::*fp1)();
	fp=&Area::area_square;
	fp1=&Area1::area_rec;
	cout<<"\n Area of square"<<(ob.*fp)();
	cout<<"\n Area of square"<<(ob1.*fp1)();


	return 0;
}
