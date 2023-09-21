// Muplti-level Inheritance 

#include<iostream>
using namespace std;

class fruit
{
    public:
    string name;
};

class mango:public fruit
{
    public:
    int weight;
};

class alphanso:public mango
{
    public:
    int size;
};

int main()
{
    fruit type;
    type.name="mango";
    // dynamic memory
    alphanso* a=new alphanso;
    a->name="mango";
    cout<<"name is "<<a->name;
    return 0;
}