#include<stdio.h>
int main()
{
    int x=10;
    int *ptr = &x;
    *ptr = 4;
    printf("%d",*ptr);
    return 0;

}