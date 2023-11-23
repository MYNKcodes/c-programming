//WAP to calculate celcius to fahrenheit.

#include<stdio.h>
int main()
{
int celcius;
float f,g;
printf("enter temperature in celcius: ");
scanf("%d",&celcius);
g=(celcius*1.8)+32;
printf("temperature fahrenheit is %f",g);
return 0;

}