// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     // cout << "enter the value of n";
//     cin >> n;
//     for (int a = 1; a <= n / 2; a++)
//     {
//         for (int b = 1; b <= n / 2; b++)
//         {
//             cout << " ";
//         }
//         for (int c = 1; c <= n / 2 - 1; c++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int d = 1; d <= n; d++)
//     {
//         cout << "*";
//     }
//     cout<<endl;
//     for (int e = 1; e <= n / 2; e++)
//     {
//         for (int f = 1; f <= n / 2; f++)
//         {
//             cout << " ";
//         }
//         for (int g = 1; g <= n / 2 - 1; g++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    for(int i=1;i<=n/2;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==(n/2)+1)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    cout<<"*";


    cout<<endl;

    for(int i=1;i<=n/2;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==(n/2)+1)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
}