// basic -2
// basics

// this is static memory

#include<iostream>
using namespace std;

class Animal{
    private:
int weight;

    public:
    // state or properties
    int age;
    string name;

    //behaviour
    void eat()
    {
        cout<<"Eating"<<endl;

    }

    void function()
    {
        cout<<"Sleeping"<<endl;
    }


    // to access private member use set and get

    int getWeight()
    {
        return weight;
    }

    void setWeight(int w)
    {
        weight = w;
    }


    
};

int main()
{
    // object creation

    // static
    Animal ramesh;
    ramesh.age = 12;
    ramesh.name = "lion";
    // if we want to access ramesh age who is member of animal class we access with help of "." operator
    cout<<"Age is "<<ramesh.age<<endl;

    cout<<"Name is "<<ramesh.name<<endl;


    ramesh.eat();
    ramesh.function();

    // age and name function cant be access as it is private

    // to access private member
    ramesh.setWeight(101);
    cout<<"Weight - "<<ramesh.getWeight()<<endl;



    // dynamic memory
}
