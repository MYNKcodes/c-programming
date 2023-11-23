#include<stdio.h>
int add(int a, int b);

int main()

{
    int m,d,n;
    printf("enter number: ");
    scanf("%d",&m);
    printf("enter number: ");
    scanf("%d",&n);
    d=add(m,n);
    printf("the sum is %d",d);
    return 0;
}
int add(int a, int b)
{
    while (b!=0)
    {
        a++;
        b--;
    }
    return a;
}