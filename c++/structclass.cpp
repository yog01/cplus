#include <iostream>
#include <cstring>

using namespace std;

struct employee{
	void putname(char *n);
	void getname(char *n);
	private:
	char name[20];
};

void employee::putname(char *n)
{
	strcpy(name,n);
}
void employee::getname(char *n)
{
	strcpy(n,name);
}	

int main()
{
	employee ob;
	char name[20];
	ob.putname("tom");
	ob.getname(name);
	cout<<"name"<<name;

	return 0;
}
