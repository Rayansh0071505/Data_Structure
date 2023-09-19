#include<iostream>
using namespace std;

int area_circle(int n)
{
    float area;
    area = 3.14*n*n;

    return area;

}

int main()
{
    int r;
    cout<<"Enter the radius"<<endl;
    cin>>r;

    cout<<"The area is "<<area_circle(r);
}