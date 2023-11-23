#include<stdio.h>
int digits(int a);
int main()
{
int n;
printf("enter number: ");
scanf("%d",&n);
int d= digits(n);
printf("the number of digits are: %d",d);
return 0;
}
int digits(int a)
{
    int count=0;
    while (a!=0)
    {
        a=a/10;
        count++;
    }
    return count;
}