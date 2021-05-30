#include <iostream>
using namespace std;
int main()
{
    int n, a = 0;
    cin>>n;
    int i = 2;
    while (i <= n/2)
    {
        // cout<<i<<endl;
        if (n % i == 0)
        {
            a = 1;
            break;
        }
        i++;
    }
    if (a == 0)
        cout << "Prime number";
    else
        cout << "Not prime";
}