// Inheritance
// private class - when both data member and mode of transmission is private - error not possible to call
// see table 27 at readme 
#include<iostream>
using namespace std;

class animal
{
    private:
    int weight;
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

// private class - when both data member and mode of transmission is private - error not possible to call
class cat:private animal
{
    public:
    void getweight(int w)
    {
        this->weight=w; // weight is inaccessible as both parent class member is private and mode of inheritance is private so not possible to call
    }
}

int main()
{
    animal a;
    a.age=26;
    dog d;
    d.print();
    cout<<a.age;
    cout<<d.age; // this will give error as it inherit protected parent class so it can call the function but it cant call its member like age
}