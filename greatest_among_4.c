 //to find the greatest number among 4 inputs

#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter your first number:");
    scanf("%d",&a);
    printf("Enter your second number:");
    scanf("%d",&b);
    printf("Enter your third number:");
    scanf("%d",&c);
    printf("Enter your fourth number:");
    scanf("%d",&d);
    if (a>b&&a>c&&a>d)
    {
        printf("greatest number is: %d",a);
    }
    else if (b>c&&b>d)
    {
        printf("greatest number is:%d",b);
    }
    else if (c>d)
    {
        printf("greatest number is %d",c);
    
    }
    else
    printf("greatest integer is %d",d);
    return 0;

}