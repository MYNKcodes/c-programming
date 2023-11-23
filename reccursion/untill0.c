#include<stdio.h>
int fun(int a);

int main()
{
int n;
printf("enter number: ");
scanf("%d",&n);
printf("%d",fun(n));
return 0;
}

int fun(int a)
{
    if (a==0)
    {
        return 0;
    }
    else
    {
        return fun(a-1);
    }
    
}