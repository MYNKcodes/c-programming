#include<stdio.h>
int main()
{
    int a[]={12,52,566,12,48};
    int *p;
    p=&a[2];
    p=p+2;      //shifted value to 2 places forward   p=p+2 === a[2+2]
    printf("he he %d",*p);
    return 0;
}