#include<iostream>
using namespace std;
void odd(int x ,int y)
{
    for(int i=x;i<=y;i++)
    {
        if(i%2!=0)
        cout<<i<<endl;
    }
}
void even(int x,int y)
{
    for(int i=x;i<=y;i++)
    {
        if(i%2==0)
        cout<<i<<endl;
    }
}
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    odd(n1,n2);
    cout<<"--------------------------";
     even(n1,n2);
     cout<<"--------------------------";
     even(n1=2,n2=30);
     cout<<"--------------------------";
     even(n1,n2);
     cout<<"--------------------------";
}