/*
 * binder.cpp
 *
 *  Created on: 11 Oct 2021
 *      Author: yo
 */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){

	vector<int> v1;
	vector<int>::iterator p,endp; //use endp to find iterator which is greter than equal to 3

	for(int i=0;i<10;i++)
	{
		v1.push_back(i);
	}

	for(p=v1.begin();p!=v1.end();p++)
	{
		cout<<" "<<*p;
	}

	endp=remove_if(v1.begin(), v1.end(), bind2nd(greater<int>(), 3));

	cout<<"\n";

	for(p=v1.begin();p!=endp;p++)
	{
		cout<<" "<<*p;
	}
	return 0;
}
