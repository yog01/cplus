/*
 * classmemberfunctionpointerfnoverloading.cpp
 *
 *  Created on: 8 May 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class Area{
	int length;
	int breath;
public:
	Area(int a, int b):length(a),breath(b){

	}

	int area(int a){
		length=a;
		return length*length*length;
	}
	int area(int a, int b)
	{
		length=a;
		breath=b;
		return length*breath;
	}
};

int main()
{
	Area ob(0,0);
	int (Area::*fp_s)(int);
	int (Area::*fp_r)(int,int);

	fp_s=&Area::area;
	fp_r=&Area::area;

	cout<<"\n Area of square "<<(ob.*fp_s)(10);
	cout<<"\n Area of square "<<(ob.*fp_r)(10,20);

	return 0;
}
