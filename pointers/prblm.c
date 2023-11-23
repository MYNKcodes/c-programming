#include<stdio.h>
int main()
{
    int a[]={23,53,1,4,34,3653,3,21,31,35};
    int *p=&a[1];
    int *q=&a[5];

    printf("%d ",*(p+3));
    printf("%d ",*(q-3));
    printf("%d ",q-p);
    printf("%d ",p<q);
    printf("%d ",*p<*q);
    return 0;

}