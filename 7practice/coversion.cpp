#include <iostream>
using namespace std;
int main()
{
    float c, f, k;
    int choice;
    cout<<"Enter the choice "<<endl;
    cin >> choice;
    if (choice == 1)
    {
        cout<<"Enter the celsius"<<endl;
        cin >> c;
        float fehrenheit = (c * 9 / 5) + 32;
        cout<<"The fehrenheit value is"<<endl;
        cout << fehrenheit;
    }
    else if (choice == 2)
    {
        cout<<"Enter the fehrenheit"<<endl;
        cin >> f;
        float celsius = f - 32 / 1.8;
        cout<<"The celsius value is"<<endl;
        cout << celsius;
    }
    else if (choice == 3)
    {
        cout<<"Enter the celsius"<<endl;
        cin >> c;
        float kelvin = c + 273.15;
        cout<<"The kelvin value is"<<endl;
        cout << kelvin;
    }
    else if (choice == 4)
    {
        cout<<"Enter the kelvin<<endl";
        cin >> k;
        float celsius = k - 273.15;
        cout<<"The celsius value is"<<endl;
        cout << celsius;
    }
}