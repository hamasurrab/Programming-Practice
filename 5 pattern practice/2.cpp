#include <iostream>
using namespace std;
int main()
{
    int n;
    // cout << "enter the value of n";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i-1; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= n - i + 1; k++)
        {
            cout << "*"; 
        }
        cout << endl;
    }
    for(int l=1;l<=n;l++)
    {
        for(int m=1;m<=n-l;m++)
        {
            cout<<" ";
        }
        for(int q=1;q<=l;q++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}


/*
*****
 ****
  ***
   **
    *
    *
   **
  ***
 ****
*****
     */