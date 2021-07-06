/*
 * arrayelementmove.cpp
 *
 *  Created on: 28 Jun 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

template <class x>
void arrayarrange(x array[],int size, int end, int start)
{
	int i=0;

	for(i=end+1;i<size;start++)
	{
		array[start]=array[i];
		i++;
	}

	for(;start<size;start++)
	{
		array[start]=0;
	}

}
template <class x>
void display(x array[],int size)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		cout<<" "<<array[i];
	}
}

int main()
{
	int array_original[]={0,1,2,3,4,5};

	display<int>(array_original, 6);
	cout<<"\n";

	arrayarrange<int>(array_original, 6, 4, 2);

	display<int>(array_original, 6);

	return 0;
}
