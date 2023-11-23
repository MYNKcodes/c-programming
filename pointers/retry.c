#include<stdio.h>
int *find(int a[],int l);
int main()
{
    int a[]={46,23,1,23,35};
    int len = sizeof(a)/sizeof(a[0]);
    int *mid= find(a,len);
    printf("mid point is %d", *mid);
    return 0;
}
int *find(int a[],int l)
{
    return &a[l/2];
}