#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void eat()
	{
		cout<<"is eating"<<endl;
	}
};
class Cat: public Animal
{
public:
	void eat()
	{
		cout<<"the cat is eating "<<endl;
	}
};
int main ()
{
Animal *ptr;
Cat c;

ptr=&c;
ptr->eat();
return 0;
}
