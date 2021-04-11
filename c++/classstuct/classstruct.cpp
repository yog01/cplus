#include <iostream>
#include <cstring>

using namespace std;

class employee{
	private:
	char name[20];
	public:
	void putname(char *n);
	void getname(char *n);
	
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
	ob.putname("tomcrusi");
	ob.getname(name);
	cout<<"name"<<name;
	return 0;
}
