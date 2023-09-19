// combination of all concept here

#include<iostream>
using namespace std;

class animal
{
    int weight;
    public:
    int age;
    string name;

    // paramaterise constructor
    animal(int weight,int age,string name)
    {
        cout<<"Paramaterise constructor is called "<<endl;
        this->weight=weight;
        this->age=age;
        this->name=name;
    }

    // copy constructor

    animal(animal &obj)
    {
        cout<<"Copy constructor is called "<<endl;
        this->age=obj.age;
        this->weight=obj.weight;
        this->name=obj.name;
    }
    
    // to access private object weight
    int getweight()
    {
        return weight;
    }
    void setweight(int weight)
    {
        this->weight=weight;
        
    }
    ~animal()
    {
        cout<<"Destructor is called "<<endl;
    }

};

int main()
{
    animal a(100,20,"hari"); // static memory
    animal* b=new animal(100,20,"shiva");  // dynamic memory
    b->setweight(200);
    cout<<"weight of b "<<b->getweight()<<endl;
    animal c = a;
    cout<<c.getweight()<<" "<<c.name<<" "<<endl;
    
    //copy dynamic class in static class
    animal d=*b;
    cout<<d.getweight()<<" "<<d.name<<" "<<d.age<<endl;
    
    //copy dynamic class in dynamic class
    animal* e=new animal(*b);
    cout<<e->getweight()<<" "<<e->name<<" "<<e->age<<endl;

    // delete dynamic memory
    delete(b);
    delete(e);
    
    return 0;
}