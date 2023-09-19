// PERFECT ENCAPSULATION

#include<iostream>
using namespace std;

class animal
{
    private:  // default is private no need to write
    int weight,age;  // data member
    // all data member should be private for perfect encapsulation
    public:

    void eat()  // member function
    {
        cout<<"Encapsualation of member function "<<endl;
    }

    int getage()
    {
        return this->age;               
    }

    void setage(int age)
    {
        this->age=age;
    }

    int getweight()
    {
        return this->weight;
    }

    void setweight(int weight)
    {
        this->weight=weight;
    }
    ~animal()
    {
        
    }
};

int main()
{
    animal* a = new animal;
    a->eat();
    a->setweight(100);
    a->setage(30);

    cout<<"Age is "<<a->getage()<<"  "<<"Weight is "<<a->getweight()<<endl;
    delete(a);
    return 0;
}