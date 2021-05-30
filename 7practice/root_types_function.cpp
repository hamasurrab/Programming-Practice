#include<iostream>
#include"math.h"
using namespace std;
void root(float,float,float);
int main()
{
   float a,b,c,d=0;
   cin>>a>>b>>c;
   root(a,b,c);
}
void root(float x,float y,float z)
{
    float D;
    D=((y*y)-(4*x*z));
    float root1=(-y+sqrt(D))/(2*x);
    float root2=(-y-sqrt(D))/(2*x);
    cout<<root1<<"  "<<root2<<endl;
    if(D>0)
    cout<<"root are real and distinct";
    else if(D=0)
    cout<<"root are equal";
    else
    cout<<"roots are imaginary";
}