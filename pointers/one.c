#include<stdio.h>
int main()
{
    

    int i = 1;
    int *q;
    int *p=&i;
    q=p;
    *q=5;
    printf("%d %d",*p,*q);
    return 0;
}