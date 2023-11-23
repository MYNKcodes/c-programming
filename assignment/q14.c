//WAP to calculate compound interest.

#include<stdio.h>
#include<math.h>
int main()
{
    float pwr, p,r,t,i,calc;
    printf("enter principle: ");
    scanf("%f",&p);
    printf("enter rate: ");
    scanf("%f",&r);
    printf("enter time: ");
    scanf("%f",&t);
    i=(1+(r/100));
    pwr=pow(i,t);
    calc=(p*pwr);
    printf("the compound interest will be: %f",calc);
    return 0;


}