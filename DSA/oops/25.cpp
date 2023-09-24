// // case

// while calling child class in parent class
// while calling parent class in parent class
// while calling parent class in child class

#include<iostream>
using namespace std;

class animal
{
    public:
    int age;
    animal()
    {
        cout<<"I am inside animal constructor"<<endl;
    }
};

class dog:public animal
{
    public:
    dog()
    {
        cout<<"I am inside dog constructor"<<endl;
    }
};

int main()
{
    cout<<"Parent to parent class "<<endl;
    cout<<endl;
    animal* a = new animal;
    cout<<endl;
    cout<<"Parent to child class "<<endl;
    cout<<endl;   

    animal* an = new dog; 
    // you see we didnt need to use void to get dog constructor its because void is used only when we need to call child class in 
    // parent class but when we call constructor both child and parent class will be called
    cout<<endl;
    cout<<"child to parent class "<<endl;
    cout<<endl;

    dog* d = (dog*) new animal;
    // to call parent class with child class we need to write format like this
    // but only parent constructor will call because its not dependent on anyone while
// in case of parent to child child and parent constructor is calling as child class dependent on parent class typical inheritance case
    // child_class* c = (child_class*) new parent_class;

    cout<<endl;
    cout<<"child to child class "<<endl;
    cout<<endl;

    dog* doggy = new dog;
}