#include<stdio.h>
int sub(int a,int b)
{
    return(a-b);
}
int main()
{
    int m=35,n=45;
    int diff= sub(m,n);
    printf("difference is %d",diff);
    return 0;
}