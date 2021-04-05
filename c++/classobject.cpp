#include<iostream>
#include<cstring>
using namespace std;

class employee{
	char name[20];
	int wage;
	public:
	void putname(char *n);
	void getname(char *n);
	void putwage(int n);
	int getwage();
};

void employee::putname (char *n)
{
	strcpy(name,n);
}
void employee::getname (char *n)
{
	strcpy(n,name);
}

void employee::putwage(int n)
{
	wage=n;
}	
int employee::getwage()
{
	return wage;
}

int main()
{
	char name[20];
	employee a;
	a.putname("tom");
	a.putwage(700);
	a.getname(name);
	cout<<name<<"has salary"<<a.getwage();
	return 0;
}

