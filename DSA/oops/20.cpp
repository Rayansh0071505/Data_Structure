// POLYMORPHISM - COMPILE TIME POLYMORPHISM - FUNCTION OVERLOADING

// Here we create function with same name but different signature i.e different params or different data type inside param
// but dont change return type otherwise it will throw error
// this type we called function overloading
#include<iostream>
using namespace std;

class Maths
{
    public:
    int a;
    int b;
   
    int solve(int a,int b)
    {
        cout<<"First Signature"<<endl;
        return a+b;
    }

    int solve (int a,int b,int c)
    {
        cout<<"Second signature"<<endl;
        return a+b+c;
    }

    int solve (int a,float b)
    {
        cout<<"xThird signature"<<endl;
        return a+b+100;
    }
     double solve (int a,int b,int c,int d)
    {
        cout<<"FOurth signature"<<endl;
        return a+b+c+d+100;
    }
};
// this will give error as it has same param like signature 1 but due to different data return type it will throw error as it causes
// ambiguity between function

// so remember change inside parameter with data type or quantity dont change return type like
// int solve or double solve 
//or if you do same number of param inside then only change return type

// error - 

//  double solve(int a,int b)  
//     {
//         cout<<"last Signature"<<endl;
//         return a+b;
//     }

// int solve(int a,int b)
//     {
//         cout<<"First Signature"<<endl;
//         return a+b;
//     }

// both have same number of param so changing return type like double or int will not make it different function thus give error



int main()
{
    Maths* m=new Maths();
    cout<<m->solve(10,20)<<endl<<m->solve(10,20,30)<<endl<<m->solve(10,5.24f)<<endl<<m->solve(10,20,30,40);
    //5.24f f repressent it is float value otherwise 
    // it taken as double default but in param we call value as float thats why we add f in the end of our num
    delete m;
    return 0;
}