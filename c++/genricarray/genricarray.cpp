/*
 * genricarray.cpp
 *
 *  Created on: 11 Jul 2021
 *      Author: yo
 */
#include <iostream>
#define SIZE 10
using namespace std;

template <class arr_type>
class Array{
	int i;
	arr_type arr[SIZE];
public:
	Array(){
		for(i=0;i<SIZE;i++)
		{
			arr[i]=i;
		}
		i=0;
	}


	arr_type &operator[](int i);
};

template <class arr_type>
arr_type &Array<arr_type>::operator[](int i) //datatype class::function(parameter)
{
	if(i<0 || i>SIZE)
	{
		cout<<"out of bound";
		exit(0);
	}
	return arr[i];
}
int main()
{
	Array<int> arr;
	int i=0;
	for(i=0;i<SIZE;i++)
	{
		arr[i]=i;
	}
	for(i=0;i<SIZE;i++)
	{
		cout<<arr[i];
	}
	arr[100]=20;
	return 0;
}
