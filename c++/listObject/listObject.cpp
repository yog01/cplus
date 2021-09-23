/*
 * listObject.cpp
 *
 *  Created on: 22 Sep 2021
 *      Author: yo
 */
#include <iostream>
#include <list>
#include <cctype>

using namespace std;

class lis{
	int a,b,sum;
public:
	lis(){a=b=sum=0;}
	lis(int i, int j):a(i),b(j){
		sum=a+b;
	}
	int get_sum()
	{
		return sum;
	}
	friend bool operator<(lis &ob, lis &ob2);
	template<class type>
	void dis(type t);
};
template<class type>
void lis::dis(type t)
{
	list<lis>::iterator p;
	p=t.begin();
	while(p!=t.end())
	{
		cout<<" "<<p->get_sum();
		p++;
	}
	cout<<"\n";
}
bool operator<(lis &ob, lis &ob2)
{
	return ob.a<ob2.b;
}
int main()
{
	list<lis> li1,li2; // create list of type lis class having object li1;
	list<lis>::iterator p;
	int i=0;

	for(i=0;i<10;i++)
	{
		li1.push_back(lis(i,i));
	}
	//p=li1.begin();
	p->dis(li1);
	for(i=0;i<10;i++)
	{
		li2.push_back(lis(i*2,i*2));
	}
	//p=li2.begin();
	p->dis(li2);

	li1.merge(li2);

	if(li2.empty())
	{
		cout<<"li2 is empty\n";
	}
	p->dis(li1);

	return 0;
}
