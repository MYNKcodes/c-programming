//WAP to find simple interest

#include<stdio.h>
int main()
{
    float p,r,t,i;
    printf("enter principle: ");
    scanf("%f",&p);
    printf("enter rate: ");
    scanf("%f",&r);
    printf("enter time: ");
    scanf("%f",&t);
    i=p*r*t;
    printf("the interest will be: %0.1f",i/100);
    return 0;


}