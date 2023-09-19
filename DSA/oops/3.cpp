// Dynamic memory

#include<iostream>
using namespace std;

class animal
{
    public:
    int age;
    int name;
    void eat()
    {
        cout<<"Eating"<<endl;

    }

    void function()
    {
        cout<<"Sleeping"<<endl;
    }

};
int main()
{
    // dynamic memory
    animal* suresh = new animal;
    // in suresh we save the address of animeal as it is pointer

    // to access age and name
    (*suresh).age=15;
    (*suresh).eat();
    cout<<(*suresh).age<<endl;

    cout<<"alternate method ----------- "<<endl;

    // alternate method
    suresh->age=15;
    suresh->eat();
    suresh->function();
    cout<<suresh->age;

}