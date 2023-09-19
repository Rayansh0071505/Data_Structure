// inheritance - when mode of transmission and data member are public

#include<iostream>
using namespace std;


// Parent class
class animal
{
    public:
    int age,weight;

    void eat()
    {
        cout<<"Eating "<<endl;
    }

};

// child class

class dog:public animal
{

};

int main()
{
    dog d1;
    d1.eat();
    return 0;
}