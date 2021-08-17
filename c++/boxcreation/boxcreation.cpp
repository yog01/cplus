/*
 * boxcreation.cpp
 *
 *  Created on: 16 Aug 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

class box{
	int length,width;
public:
	box(int a, int b):length(a),width(b)
	{

	}
	friend ostream& operator<<(ostream &stream,box o);
};
ostream& operator<<(ostream &stream,box o)
{
	int i,j;
	for (i=0;i<o.length;i++)
	{
		stream<<"*";
	}
	cout<<"\n";
	for(i=1;i<(o.width-1);i++)
	{
		for(j=0;j<o.length;j++)
		{
			if(j==0||j==(o.length-1))
			{
				stream<<"*";
			}
			else
			{
				stream<<" ";
			}
		}
		stream<<"\n";
	}
	for (i=0;i<o.length;i++)
	{
		stream<<"*";
	}
	return stream;
}
int main()
{
	box ob(9,10),ob1(4,8);
	cout<<ob1;
	return 0;
}
