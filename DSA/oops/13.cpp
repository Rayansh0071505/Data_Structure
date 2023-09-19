// INHERITANCE
// When data member are protected but mode of transmission is protected at that time you can call/access its data member
// in the function inside child class but child class will not be able to call directly parent class member as it is protected

// code will give error as child class trying to call protected member of parent class

#include<iostream>
using namespace std;

class animal
{
   
    public:
    int age;
    string name;

    void eat()
    {
        cout<<"Eating";
    }
};

// protected class
class dog:protected animal
{
    public:
    void print()
    {
        cout<<this->age;
    }    
};
int main()
{
    animal a;
    cout<<a.age;
    dog d;
    d.print();
    cout<<d.age; // this will give error as it inherit protected parent class so it can call the function but it cant call its member like age

    return 0;
}