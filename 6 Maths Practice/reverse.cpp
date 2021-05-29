#include <iostream>
using namespace std;
int main()
{
    int n, rem, rev=0;
    cin >> n;
    int save = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }
    cout<<rev;
}

//     if(save==rev)
//     cout<<"PALINDROME";
//     else
//     cout<<"NOT PALINDROME";
// }
