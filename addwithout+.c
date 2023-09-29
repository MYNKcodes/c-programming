//we will do program to add 2 integers without using (+) operator
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
while (b != 0)
{
   a++;
   b--;
}
printf("the sum is %d",a);
return 0;
}