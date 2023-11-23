#include<stdio.h>
int sum(int a, int b)
{
    return(a+b);
}
int main()
{
    int m=10,n=56,add;
    add=sum(m,n);
    printf("sum is %d",add);
    return 0;
}