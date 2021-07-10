/*
 * genricclass.cpp
 *
 *  Created on: 6 Jul 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;
#define SIZE 10

template <class type>
class stack{
	type arr[SIZE];
	int point;
public:
	stack()
	{
		point=0;
	}
	type push(type ob);
	type pop();
};

template <class type>
type stack<type>::push(type ob)
{
	if(point==SIZE)
	{
		cout<<"stack is full";
		return -1;
	}

	arr[point]=ob;
	point++;
	return ob;
}

template <class type>
type stack<type>::pop()
{
	if(point==0)
	{
		cout<<"stack is empty";
		return -1;
	}
	point--;
	return arr[point];
}

int main()
{
	int i=0;
	stack<int> i1;
	stack<double> d1;

	cout<<"\n push int\n";
	for(i=0;i<9;i++)
	{
		cout<<i1.push(i);
	}
	cout<<"\n pop int\n";
	for(i=0;i<9;i++)
	{
		cout<<i1.pop();
	}
	cout<<"\n push float\n";
	cout<<d1.push(0.1);
	cout<<d1.push(2.1);
	cout<<d1.push(4.1);
	cout<<"\n pop float\n";
	for(i=0;i<3;i++)
	{
		cout<<d1.pop();
	}
	return 0;
}
