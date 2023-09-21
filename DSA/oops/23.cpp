// Run-Time Polymorphism
// Function/method overriding

#include<iostream>
using namespace std;

class animal
{
    public:
    void speak()
    {
        cout<<"Speaking";
    }
    
};

class dog:public animal
{
    public:
    // function overriding
    void speak()
    {
        cout<<"barking"<<endl;
    }
};

int main()
{
    dog d;
    animal a;
    d.speak();
    
    return 0;
}