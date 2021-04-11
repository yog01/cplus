#include <iostream>

using namespace std;


class c1{
	int a;
	int b;
	public:
	void input(int x,int y);
	friend class c2;
};

class c2{
	public:
	int sum(c1 ob);
};

void c1::input(int x, int y)
{
	a=x;
	b=y;
}

int c2::sum(c1 ob)
{
	return ob.a+ob.b;
}

int main()
{
	c1 x;
	c2 y;
	x.input(10,20);
	cout<<"Sum "<<y.sum(x);
	return 0;
}
