/*
 * thread.cpp
 *
 *  Created on: 1 May 2021
 *      Author: yo
 */
#include <iostream>
#include <thread>
using namespace std;

void fun(int pram)
{
	for (int i=0;i<pram;i++)
	{
		cout<<"\nThread called by function pointer";
	}
}

class thread_obj{

public:
	void operator()(int pram)
	{
		for (int i=0;i<pram;i++)
			{
				cout<<"\nThread called by object";
			}
	}

};

int main()
{
	thread th1(fun,4);

	thread th2(thread_obj(),3);

	auto f = [](int x) {
		for (int i=0;i<x;i++)
					{
						cout<<"\nThread called by lambda";
					}

	};

	thread th3(f,2);

	th1.join();
	th2.join();
	th3.join();


	return 0;
}
