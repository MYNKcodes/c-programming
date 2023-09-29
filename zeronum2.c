//WAP to allow user to enter the integer untill he enters zero using  DO WHILE loop
#include<stdio.h>
int main()
{
    int a;
    do
    {
        printf("enter number: ");
        scanf("%d",&a);
    } while (a!=0);
    printf("u r out of loop");
    return 0;
    
}