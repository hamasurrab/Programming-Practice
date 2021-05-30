#include<iostream>
using namespace std;

void check_if_prime_or_not(int n)
{
    int a = 1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            a=0;
            break;
        }
    }
    if(a==1)
    cout<<n;
}

int main()
{
    int r1,r2;
    cin>>r1>>r2;
    for(int i=r1;i<=r2;i++)
    {
        check_if_prime_or_not(i);
       
    }
    

}