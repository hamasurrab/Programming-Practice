#include<iostream>
#include<cmath>

using namespace std;
int main ()
{
    int a,b,c,sqr,cube;
    cout<<"enter the value of a,b,c";
    cin>>a>>b>>c;
    sqr = a*a;
    cube = a*a*a;
  int root1 =(-b+sqrt((b*b)-(4*a*c)))/(2*a);
  int root2 =(-b-sqrt((b*b)-(4*a*c)))/(2*a);
  cout<<sqr<<"     "<<cube<<"     "<<root1<<"   "<<root2<<endl;

} 