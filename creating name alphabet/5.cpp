#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n || i==n/2+1 || (j==1 and i>=1 and i<=n/2) || (j==n and i>=n/2+1 and i<=n))
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
}