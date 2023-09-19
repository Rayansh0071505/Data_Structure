// INHERITANCE
// Private data member cant be access even with function inside derived/child class they can never be directly access

#include<iostream>
using namespace std;

class animal
{
    private:
    int age;
};

class dog:public animal
{
    public:
    void print()
    {
        cout<<this->age; //age is inaccessible as it is private
    } 
};
int main()
{
    dog d;
    d.print(); // can not access age as it is private so print function will not show any  output
}