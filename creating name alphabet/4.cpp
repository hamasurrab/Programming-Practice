#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==1 or j==n or (j<=(n/2)+1 and j==i) or ((j>n/2+1) and j==n-i+1 ))
            {
                cout<<"*";

            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
}