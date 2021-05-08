#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float r,h,cone,vol;
    cout<<"enter the value of r&h";
    cin>>r>>h;
    cone =((3.14*r)*(r+sqrt(h*h+r*r)));
    vol =(3.14*r*r*h)/3;
    cout<<cone<<"    "<<vol<<endl;
    
}