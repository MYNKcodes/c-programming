#include<iostream>
using namespace std;
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j = 1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++)
        {
            cout<<"*";

        }
        cout<<endl;
    }
return 0;
}