#include<stdio.h>
int main()
{
    int x = 10;
    int *p,*q;
    p=&x;
    q=p;
    printf("%d %d",*p,*q);
    return 0;
}