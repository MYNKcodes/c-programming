#include<stdio.h>
int fact(int n);

int main()
{
int a;
printf("enter the number:-");
scanf("%d",&a);
printf("factorial of %d is %d",a,fact(a));
return 0;
}

int fact(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
    
}