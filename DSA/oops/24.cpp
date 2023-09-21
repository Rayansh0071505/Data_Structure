// UPCASTING
// when we have parent class pointer and child class pointer like Animal and dog
//         animal* a= new dog()
//         a->speak();

//         during upcasting if you call function parents function always call not child

//         to print child function use 'virtual' command

#include<iostream>
using namespace std;

class animal
{
    public:
    virtual void speak()
    {
        cout<<"Speaking ";
    }
};

class dog:public animal
{
    public:
    void speak()
    {
        cout<<"barking";
    }
};

int main()
{
    // upcasting
    animal* a=new dog();
    // inheriting dog property as virtual is used in animal class
    a->speak();
    return 0;
}