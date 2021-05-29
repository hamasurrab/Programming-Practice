#include<iostream>
using namespace std;
// 2 60, 4 50, 7 90, 30 78
int main()
{
    int n1 = 2, n2 = 60;
    // cin>>n1>>n2;
    for(int i=n1;i<=n2;i++)
    {
        if(i%2!=0)
        cout<<i<<endl;
    }
    cout<<"________________";
    n1 = 4, n2=50;
    for(int i=n1;i<=n2;i++)
    {
        if(i%2!=0)
        cout<<i<<endl;
    }
    cout<<"________________";
    n1 = 7, n2=90;
    for(int i=n1;i<=n2;i++)
    {
        if(i%2!=0)
        cout<<i<<endl;
    }
    cout<<"________________";
    n1 = 30, n2=78;
    for(int i=n1;i<=n2;i++)
    {
        if(i%2!=0)
        cout<<i<<endl;
    }

}