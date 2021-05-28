#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l;
  //  cout<<"enter the value of n";
    //cin>>n;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
       { 
           cout<<"*";
       }
       for(k=1;k<=i;k++)
       {
           cout<<" ";
       }
       for(l=5;l>=k;l++)
       {
           cout<<"*";
       }
       cout<<endl;
     
    }
    
}