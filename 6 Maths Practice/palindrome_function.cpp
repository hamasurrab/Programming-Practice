#include<iostream>
using namespace std;
void palindrome(int);
int main()
{
    int n;
    cin>>n;
    palindrome(n);
}



void palindrome(int x)
{
    int rem,rev=0;
    int a=x;
    while(x!=0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }
    cout<<rev<<endl;
    if(a==rev)
    cout<<"PALINDROME"<<endl;
    else
    cout<<"NOT PALINDROME"<<endl;


    
}