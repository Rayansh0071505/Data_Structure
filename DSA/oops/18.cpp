// Multiple inheritance
// problem - what if in last file if two constructor have same object like class A and B have class have same object chemistry
// at that time when we try to access the compiler will get confuse from which class we have to take and this cause problem 
// called ambiguious problem or diamond problem ,  this problem solved with help of scope resolution operator


//here we discuss only problem and in next file we discuss solution with help of scope resolution
#include<iostream>
using namespace std;

class a
{
    public:
    int chemistry;
};

class b
{
    public:
    int chemistry;
};

class c:public a , public b
{
    public:
    int biology;
};

int main()
{
    c* third = new c;
    cout<<third->chemistry<<" "<<third->biology;
}

// see in terminal its causes ambigious problem