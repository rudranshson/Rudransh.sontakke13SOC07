#include <iostream>
using namespace std;

class Animal
{
public:
        void eat()
        {
                cout<<"the animal is eating"<<endl;
        }
};

class Cat : public Animal
{
public:
        void eat()
        {
                cout<<"the cat is eating"<<endl;
        }
};

int main()
{
Animal a;
Cat c;
a.eat();
c.eat();
return 0;
}


