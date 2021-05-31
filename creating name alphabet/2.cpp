#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            if(j== (n/2)+1)
            {

            }
            if (j==n-i+1 || j==n-1+i || ( i== (n/2)+1 and j>n-i+1 and j<n-1+i))
            cout<<"*";
            else 
            cout<<" ";
        }
        cout<<endl;
    }
    }
