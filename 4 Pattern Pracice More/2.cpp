#include <iostream>
using namespace std;
int main()
{
    int i, j, k, n;
    cout << "enter the value of n";
    cin >> n;
    for (i = 0; i <= n - 1; i++)
    {
        for (j = 1; j <= n - i - 1; j++)
        {
            cout << "-";
        }
        cout << endl;
    }
    for (k = 1; k <= 2 * i + 1; k++)
    {
        if (n%2==0)
        {
            cout << "+";
        }
        else
        {
            cout << "*";
        }
        cout << endl;
    }
}