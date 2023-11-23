//WAP to add 2 complex numbers.
#include<stdio.h>
typedef struct complex
{
    float real;
    float imag;
}complex;

complex add(complex n1,complex n2)
{
    complex temp;
    temp.real=n1.real+n2.real;
    temp.imag=n1.imag+n2.imag;
    return (temp);
}


int main()
{
    complex n1,n2,result;
    printf("for first number\n");
    printf("enter real parts: ");
    scanf("%f",&n1.real);
    printf("enter imaginary parts: ");
    scanf("%f",&n1.imag);
    printf("for second number\n");
    printf("enter real parts: ");
    scanf("%f",&n2.real);
    printf("enter imaginary parts: ");
    scanf("%f",&n2.imag);
    result = add(n1,n2);
    printf("sum = %f + %f",result.real,result.imag);
    return 0;
}