#include<iostream>
using namespace std;
void triangle(int ,int ,int);
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    triangle(a,b,c);
}
void triangle(int x,int y,int z)
{
    if(x==y && x==z)
    cout<<"TRIANGLE is EQUILATERAL TRIANGLE ";
    else if(x==y || y==z || z==x)
    cout<<"TRIANGLE is ISOSCALES TRIANGLE";
    else
    cout<<"ISOSCALEN TRIANGLE";
}