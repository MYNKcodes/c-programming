#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {cout<<n-j<<" ";}
        cout<<endl;
    }
return 0;
}
