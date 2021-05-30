#include <iostream>
using namespace std;
int main()
{
    //int n;
    //cout<<"enter the value of n\n";
    //cin>>n;
    for (int i = 1; i <= 7 / 2; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (i == j || j == 7 - i + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
   
    for (int i = 1; i <= 7 / 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (j == 7 / 2 + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
   
    for (int i = 7 / 2 + 2; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (i == j || j==7 - i + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
  
}