#include<iostream>
using namespace std;

class animal
    {
        public:
        int age;
        int weight;
        string name;
        // default constructor

        animal()
        {
            this->age=20;            
            cout<<"Constructor called "<<endl;
            this->weight=100;
            this->name="Default";
        }

        //paramaterise constructor - here we pass the input also

        animal(int age)
        {
            this->age=age;
            cout<<"Paramaterise constructor is called "<<endl;
        }

        
    };
int main()
{
      animal a; // static way to call
      animal* b = new animal(); // dynamic way
      a.name="ray";
      cout<<"Name with changed value "<<a.name<<endl;
      cout<<"Age with default constructor "<<a.age<<endl;

      cout<<"paramaterise constructor session start----- "<<endl;
      cout<<endl;
      animal* c=new animal(100);
      cout<<"paramaterise age "<<c->age<<endl;  // to call dynamic value with help of "->"

}