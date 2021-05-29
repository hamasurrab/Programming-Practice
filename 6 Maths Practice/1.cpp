#include<iostream>
using namespace std;

void odd(int x,int y)
{
    for(int i=x;i<=y;i++)
    {
        if(i%2!=0)
        cout<<i<<endl;
    }
}


void even(int x, int y)
{
    for(int i=x;i<=y;i++)
    {
        if(i%2==0)
        cout<<i<<endl;
    }
}

int main()
{
int n1=2,n2=60;

odd(n1,n2);
cout<<"_______"<<endl;



n1=4,n2=50;
odd(n1,n2);
cout<<"_______"<<endl;
cout<<"_______"<<endl;cout<<"_______"<<endl;cout<<"_______"<<endl;
even(n1,n2);

cout<<"_______"<<endl;cout<<"_______"<<endl;cout<<"_______"<<endl;
n1=7,n2=90;
odd(n1,n2);
cout<<"_______"<<endl;


n1=30,n2=78;
odd(n1,n2);

}
