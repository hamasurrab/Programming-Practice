#include<iostream>
using namespace std;
int main ()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" "<<j;
        }
        cout<<endl;
    }
    for(int k=4;k>=1;k--)
    {
        for(int l=1;l<=k;l++)
        {
            cout<<" "<<l;
        }
        cout<<endl;
    }
}