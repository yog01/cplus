/*
 * standardinputtemplate.cpp
 *
 *  Created on: 17 Jun 2021
 *      Author: yo
 */
#include <iostream>
using namespace std;

template <class data>
void spacer(data x,int a)
{
	for(int i=0;i<a;i++)
		cout<<" ";
	cout<<x<<endl;
}
int main()
{
	spacer("hi",4);
	spacer("bye",4);


	return 0;
}
