#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"put n value";
    cin>>n;
    for(int a=1;a<=n/2-1;a++)
    {
        for(int b=1;b<=n;b++)
        {
            if(b%2==0)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
    }
    cout<<endl;
    for(int c=1;c<=n/2-1;c++)
    {
        for(int d=1;d<=n;d++)
        {
            if(d%2==0)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
    }
    cout<<endl;
    for(int e=1;e<=n;e++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int f=1;f<=n/2-1;f++)
    {
        for(int g=1;g<=n;g++)
        {
            if(g%2==0)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
    }
    cout<<endl;
    for(int h=1;h<=n/2-1;h++)
    {
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
    }
    cout<<endl;
}