/*
 * arrayoffunctionpointer.cpp
 *
 *  Created on: Dec 27, 2021
 *      Author: ubuntu
 */

#include <iostream>

using namespace std;

class base{
	int i,j,k;
public:
	base(int l, int m, int n):i(l),j(m),k(n){

	}

	int funi()
	{
		return i;
	}
	int funj()
	{
		return j;
	}
	int funk()
	{
		return k;
	}
};

int (base::*fp[3])()={
						&base::funi,
						&base::funj,
						&base::funk };

int main()
{
	base ob(10,20,30);


	for (int i = 0; i < 3; ++i) {
		cout<<"value returned "<<(ob.*fp[i])()<<"\n";
	}

	return 0;
}

