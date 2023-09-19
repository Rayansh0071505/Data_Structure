// Copy constructor

#include<iostream>
using namespace std;

class animal{
    public:
    int age;

    animal(int age)
    {
        this->age=age;
        cout<<"Paramaterise Constructor "<<endl;
    }
    
    //copy constructor
    animal(animal &obj) // pass by reference
    {
        cout<<"I am inside copy constructor"<<endl;
    }
};

int main()
{
    animal a(10);
    animal b=a;
    return 0;
}