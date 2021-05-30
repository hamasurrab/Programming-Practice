#include"iostream"
#include"math.h"
using namespace std;
int main()
{
    float a,b,c,d=0;
    cin>>a>>b>>c;
    float D=((b*b)-(4*a*c));
    float root1 = (-b+sqrt(D))/(2*a);
    float root2 = (-b-sqrt(D))/(2*a);
    cout<<root1<<" "<<root2<<endl;
    if(D>0)
    cout<<"root are real and distinct";
    else if(D=0)
    cout<<"root are real and equal";
    else
    cout<<"root are imaginary and and unequal";
}