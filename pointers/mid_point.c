#include<stdio.h>
int *mid(int a[],int length);
int main()
{
    int a[]={43,231,45,54,12,86,2};
    int len= sizeof(a)/sizeof(a[0]);
    int *find = mid(a,len);
    printf("mid point is %d",*find);
    return 0;
}

int *mid(int a[],int length)
{
    return &a[length/2];
}