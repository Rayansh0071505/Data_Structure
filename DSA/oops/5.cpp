// paramaterise value passed with 3 parameter
#include<iostream>
using namespace std;

class animal{
    public:
    int age,weight;
    string name;

    animal(int age,int weight,string name)
    {
        cout<<"Three parameter paramaterise constructor called - "<<endl;
        this->age=age;
        this->weight=weight;
        this->name=name;
    }

};

int main()
{
    animal* a= new animal(12,40,"hari");
    cout<<"age is "<<a->age<<endl;
    cout<<"Name is "<<a->name<<endl;
    return 0;


}
