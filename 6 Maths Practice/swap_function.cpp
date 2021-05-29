#include<iostream>
using namespace std;
void swap(int , int);
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);

}
void swap(int x, int y)
{
    int c;
     c=x;
     x=y;
     y=c;
     cout<<x<<" "<<y;

    //  a= 2 b =3
    //  a = a + b 5
    //  b = a - b 2
    //  a = a - b 
}