#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<< count+j << " ";
        }
        cout<< endl;
        count=0;
    }
    return 0;
}