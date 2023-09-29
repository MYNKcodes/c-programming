#include <stdio.h>
int main()
{
    int base, exponent, expo, power = 1;
    double pwr = 1.0;
    printf("enter base: ");
    scanf("%d", &base);
    printf("enter exponent: ");
    scanf("%d", &exponent);
    expo = exponent;
    if (exponent > 0)
    {
        while (exponent != 0)
        {
            power = power * base;
            exponent--;
        }
        printf("%d to the power %d is %d", base, expo, power);
    }
    else
    {
        while (exponent != 0)
        {
            pwr = pwr * (1.0 / base);
            exponent++;
        }
        printf("%d to the power %d is %f", base, expo, pwr);
    }

    return 0;
}