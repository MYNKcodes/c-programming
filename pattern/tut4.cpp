#include<iostream>
using namespace std;
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j = 1;j<=i-1;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*(n-i)+1;j++)
        {
            cout<<"*";

        }
        cout<<endl;
    }
return 0;
}