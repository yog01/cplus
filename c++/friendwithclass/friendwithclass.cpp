#include<iostream>

using namespace std;

class c2;

class c1{
	int a;
	public:
	void input(int x);
	int sum(c2 ob2);
};

class c2{
	int c;
	public:
	void input(int x);
	friend int c1::sum(c2 ob2);
};

void c1::input(int x)
{
	a=x;
}

void c2::input(int x)
{
	c=x;
}

int c1::sum(c2 ob2)
{
	return a+ob2.c;
}

int main()
{
	c1 mob1;
	c2 mob2;

	mob1.input(10);
	mob2.input(20);

	cout<<"Sum "<<mob1.sum(mob2);

	return 0;
}

