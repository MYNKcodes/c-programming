//WAP to check weather the number given is positive , negative or zero.
#include<stdio.h>
int main()
{
    int n;
    printf("entger the number: ");
    scanf("%d",&n);
    if (n<0)
    {
        printf("%d is negative",n);
    }
    else if (n==0)
    {
        printf("%d is zero",n);
    }
    else
    {
        printf("%d is positive",n);
    }
    return 0;
}