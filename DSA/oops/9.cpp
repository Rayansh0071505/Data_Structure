// ENCAPSULATION

#include<iostream>
using namespace std;

class animal
{
    public:
    int weight,age;  // data member

    void eat()  // member function
    {
        cout<<"Encapsualation of member function "<<endl;
    }

};

int main()
{
    animal* a = new animal;
    a->eat();
}