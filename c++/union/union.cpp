#include<iostream>
using namespace std;

union data{
	void swap();
	void input(unsigned short i);
	void show();
	unsigned char c[2];
	unsigned short d;
};

void data::swap()
{
	unsigned char t;
	
	t=c[0];
	c[0]=c[1];
	c[1]=t;
}
void data::input(unsigned short i)
{	
	d=i;
}

void data::show()
{
	cout<<sizeof(unsigned short)<<" swaped "<<d;
}

int main()
{
	data ob;
	ob.input(1);//0001 -> 0100
	ob.swap();
	ob.show();
	return 0;
}




