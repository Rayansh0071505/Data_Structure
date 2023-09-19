// Destructor

#include<iostream>
using namespace std;

class animal{
    public:
    int age;

    animal(int age)
    {
        this->age=age;
    }
    ~animal()
    {
        cout<<"Destructor is called "<<endl;
    }
};

int main()
{
    animal a(100);
    animal* b= new animal(20); // default one argument will be passed
    b->age=10;
    delete(b);
}