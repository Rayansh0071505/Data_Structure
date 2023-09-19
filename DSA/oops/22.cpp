//  operator overloaing
// with help of "<<" we print the function details withput manually doing it

#include<iostream>
using namespace std;

class animal
{
    public:
    int age;
    int weight;

    void operator<<(animal& obj) //obj is object
    {
        int value1=obj.age;
        int value2=obj.weight; 
        cout<<"age "<<value1<<" "<<"weight "<<value2;  
    }
};

int main()
{
    animal obj;
    obj.age=10;
    obj.weight=20;
    obj<<obj;
    return 0;
}