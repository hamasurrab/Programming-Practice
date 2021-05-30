// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n/n;j++)
//         {
//             cout<<"*"<<endl;
//         }
//     }
// }

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-1;j++)
        {
            cout<<" ";
        }
        for(int k=i;k<=n/n;k++)
          {
              cout<<"*";
          }
        
    }
    cout<<endl;
}