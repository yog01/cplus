/*
 * vectorObject.cpp
 *
 *  Created on: 14 Sep 2021
 *      Author: yo
 */
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

class dailyTemp{
	int temp;
public:
	dailyTemp(){
		temp=0;
	}
	dailyTemp(int x):temp(x)
	{

	}

	dailyTemp &operator=(int x);
	int get_temp()
	{
		return temp;
	}
};
dailyTemp &dailyTemp::operator=(int x)
	{
		temp=x;
		return *this;
	}
int main()
{
	vector<dailyTemp> v;
	int i;

	for(int i=0;i<7;i++)
	{
		v.push_back(dailyTemp(60+rand()%30));
	}

	cout<<"Faranhite\n";
	for(i=0;i<v.size();i++)
	{
		cout<<v[i].get_temp();
	}
	cout<<"\n";

	for(i=0;i<v.size();i++)
	{
		v[i]=(int)(v[i].get_temp()-32)*5/9;
	}

	cout<<"centigrate \n";
	for(i=0;i<v.size();i++)
	{
		cout<<v[i].get_temp();
	}
	cout<<"\n";

	return 0;
}
