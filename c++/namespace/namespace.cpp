/*
 * namespace.cpp
 *
 *  Created on: Mar 8, 2022
 *      Author: ubuntu
 */
#include <iostream>

using namespace std;

namespace call{

	class base{
	public:
		void display();
	};
}

void call::base::display()
{
	cout<<"HI";
}

int main()
{
	call::base ob;
	ob.display();
	return 0;
}
