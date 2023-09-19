// Multiple Inheritance
#include<iostream>
using namespace std;

class A
{
    public:
    int maths;
};
class B
{
    public:
    int chemistry;
};
class C:public A, public B
{
    public:
    int physics;
};

int main()
{
    // C third; - static allocation
    // dynamic allocation
    C* third = new C;
    third->maths=100;
    third->chemistry=90;
    third->physics=70;
    cout<<third->maths<<" "<<third->chemistry<<" "<<third->physics;
    return 0;
}