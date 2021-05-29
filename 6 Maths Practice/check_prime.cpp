#include<iostream>
using namespace std;
int main()
{
    int n,a;
    a=0;
    cin>>n;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i!=0)
        continue;
        else
        a=1;
        break;
        
    }
    if(a==0)
        cout<<"prime";
        else
        cout<<"not prime";
}