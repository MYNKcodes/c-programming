//WAP to get greatest among 3 numbers
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter first number");
scanf("%d",&a);
printf("enter second number");
scanf("%d",&b);
printf("enter third number: ");
scanf("%d",&c);
if (a>b || a>c)
{
    printf("%d is greatest among all",a);
}
else if (b>c)
{
    printf("%d is greatest number",b);
}
else
{
    printf("%d is the greatest among all",c);
}

}