#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    // a ==10, 20, 30, ok
    // other than these three values not ok
    // int a;
    // cin>>a;
    // if(a==10 )
    // {
    //    cout<<"OK"; 
    // }
    // else if(a==20)
    // {
    //     cout<<"OK";
    // }
    // else if(a==30)
    // {
    //     cout<<"OK";
    // }
    // else 
    // {
    //     cout<<"NOT OK";
    // }

    //**************************
    //******** OR **************
    //**************************

    // if(a==10||a==20 or a==30)
    // {
    //     cout<<"OK";
    // }
    // else
    // {
    //     cout<<"NOT OK";
    // }


    int w=2,y=4,z=5;
    if((w==2 && y==6)  or z==9)
    {
        cout<<"OK";
    }
    else
    {
        cout<<"NOT OK";
    }

}