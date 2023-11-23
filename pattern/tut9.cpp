#include<iostream>
using namespace std;
int main()

{
    int n;
    cout<<"enter m: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        cout<<"*";
        for(int k=1;k<=2*n-2*i;k++)
        cout<<" ";
        for(int j=1;j<=i;j++)
        cout<<"*";
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<"*";
        }
        for(int k=1;k<=2*i;k++)
        {
            cout<<" ";
        }
        for(int j=i;j<n;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
        
    }
    return 0;
}