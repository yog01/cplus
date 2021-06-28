/*
 * templeatesorting.cpp
 *
 *  Created on: 23 Jun 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

template <class x>
void sorte(x array[], int size)
{
	int index1,index2;
	x temp;

	for(index1=0;index1<size;index1++)
	{
		for(index2=index1+1;index2<size-1;index2++)
		{
			if(array[index1]<array[index2])
			{
				temp=array[index1];
				array[index1]=array[index2];
				array[index2]=temp;
			}
		}
	}
}
template <class x>
void displaye(x array[], int size)
{
	int i=0;

	for(i=0;i<size;i++)
	{
		cout<<array[i];
	}
}

int main()
{
	int integer_array[5]={10,20,100,40,5};

	cout<<"\n normal array";
	displaye<int>(integer_array, 5);

	sorte<int>(integer_array, 5);
	cout<<"\n sorted array";
	displaye<int>(integer_array, 5);

	return 0;
}
