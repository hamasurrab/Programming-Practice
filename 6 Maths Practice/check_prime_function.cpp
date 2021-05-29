#include<iostream>
using namespace std;
void check(int n)
{
    int a=0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i!=0)
        continue;
        else
        {
        a=1;
        break;
        }
    }
    if(a==0)
    cout<<"prime";
    else
    cout<<"not prime";   
}
int main()
{
int n;
cin>>n;
check(n);
}
