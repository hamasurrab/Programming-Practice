#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    for(int i=0;i<=n-1;i++)
    {
        for(int j=1;j<=n-i-1;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            if(i%2==0)
            {
            cout<<"+";
            }
        
        else
        {
            cout<<"*";
        }
        }
        cout<<endl;
    }
}