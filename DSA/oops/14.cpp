// protected parent class data meber and mode of transmission is protected / public / private - it always give protected member only
// i.e you can access only inside child class not access direcly data member of parent class

// even if data member is protected parent class even can access its data member directly

#include<iostream>
using namespace std;

class animal
{
    protected:
    int age;
};

class dog:public animal
{
    public:
    void print()
    {
        cout<<"Public mode of inheritance "<<this->age<<endl;
    }
};

class cat:protected animal
{
    public:
    void print()
    {
        cout<<"Protected mode of inheritance "<<this->age<<endl;
    }
};

class rat:private animal
{
    public:
    void print()
    {
        cout<<"private mode of inheritance "<<this->age<<endl;
    }
};


int main()
{
    dog d;
    cat c;
    rat r;
    // cout<<d1.age; // not accessible
    // cout<<c1.age; // not accessible
    // cout<<r1.age; // not accessible

    d.print();
    c.print();
    r.print();
}