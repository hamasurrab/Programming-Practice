#include <iostream>
using namespace std;
int main()
{
    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int k = 0; k <= 4; k++)
    {
         for (int l = 1; l <= 2 * k + 1; l++)
         {
            cout << "*";
        }
    }
        cout << endl;
    
}
