// Multiple inheritance

// now here we solve problem of diamond or ambiguity with help of scope resolution

#include<iostream>
using namespace std;

class a
{
    public:
    int chemistry;
    a()
    {
        chemistry = 100;
    }
};

class b
{
    public:
    int chemistry;
    b()
    {
        chemistry = 60;
    }
};

class c:public a,public b
{
    public:
    int biology;
};

int main()
{
    c* third = new c;
    cout<<third->a::chemistry<<" "<<third->b::chemistry<<" "<<third->biology;
    return 0;
}