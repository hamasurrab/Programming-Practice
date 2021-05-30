#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && a==c)
    cout<<"TRIANGLE is EQUILATERAL TRIANGLE ";
    else if(a==b || b==c || c==a)
    cout<<"TRIANGLE is ISOSCALES TRIANGLE";
    else
    cout<<"ISOSCALEN TRIANGLE";
}