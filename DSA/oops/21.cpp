// operator overloading
// changing functionality of + operator such that its substract instead of adding

#include<iostream>
using namespace std;

class animal
{
    public:
    int val;
    void operator/(animal& obj2)
    {
        int value1 = this->val; // aceesing upper val above in public
        int value2 = obj2.val;  //obj2 is object thats why we applied . instead of pointer
        cout<<(value1-value2)<<endl;
    }

};

int main()
{
    animal obj1,obj2;
    obj1.val=10;
    obj2.val=20;
    obj1/obj2;
    
    // here we do opeator oveloading to escape 
    cout<<obj1.val-obj2.val; // we dont need to do this as we have wrote it

    // we can use different operator like +,/,-,etc
    return 0; 
}