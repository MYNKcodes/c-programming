#include<stdio.h>
int fun(int n)
{
    int k, x=1;
    if (n==1)
    {
        return x;
    }
    for ( k = 1; k < n; ++k)
    {
        x= x + fun(k) * fun(n-k);
        return x;
    }
    

}
int main()
{
    printf("%d",fun(5));
    return 0;
}