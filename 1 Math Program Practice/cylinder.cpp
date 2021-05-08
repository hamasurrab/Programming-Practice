#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float r,h,surface,vol;
    cout<<"enter the value of a&b\n";
    cin>>r>>h;
surface =(2*3.14*r*h)+(2*3.14*r*r);
vol =(3.14*r*r*h);
cout<<surface<<"   "<<vol<<endl;


}