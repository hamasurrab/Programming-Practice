#include<iostream>
using namespace std;
int digit(int);
int main()
{
    int n;
    cin>>n;
    cout<<digit(n);
}
int digit(int x)
{
    int count=0;
    while(x!=0)
    {
        x=x/10;
    count++;
    }
   // cout<<count;
   return count;
}