#include<stdio.h>
float devide(float a, float b);

int main()
{
    float m, n;
    printf("enter the numbers you want to devide: ");
    scanf("%d\n%d",&m,&n);
    float d= devide(m,n);
    printf("the devide is: %f",d);
    return 0;
}
float devide(float a, float b)
{
    float c=a/b;
    return c;
}