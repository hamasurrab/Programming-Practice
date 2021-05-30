#include <iostream>
using namespace std;
int main()
{
    long long int n, count, rem;
    cin >> n;
    count = 0;
    while (n != 0)
    {
        rem = n % 10;
        cout << rem;


        n = n / 10;


        
        count++;
        
    }
}
