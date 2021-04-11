#include<iostream>

using namespace std;

class c2;

class c1{
	int a;
	int b;
	public:
	void input(int x);
	friend int sum(c1 ob1, c2 ob2);
};

class c2{
	int c;
	public:
	void input(int x);
	friend int sum(c1 ob1, c2 ob2);
};

void c1::input(int x)
{
	a=x;
}

void c2::input(int x)
{
	c=x;
}

int sum(c1 ob1,c2 ob2)
{
	return ob1.a+ob2.c;
}

int main()
{
	c1 mob1;
	c2 mob2;

	mob1.input(10);
	mob2.input(20);

	cout<<"Sum "<<sum(mob1,mob2);

	return 0;
}

