#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n: ";
    cin>> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-2;k++)
        {
            cout<<"*";
        }
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*(n-i);j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }

        cout<<endl;
    }
    return 0;
}