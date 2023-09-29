//WAP to allow user to enter the integer untill he enters zero or negative number using while loop
#include<stdio.h>
int main(){
    int a;
    printf("enter number ");
    scanf("%d",&a);
    while (a!=0)
    {
        if (a<0)
        break;
        printf("enter number ");
        scanf("%d",&a);
    }
    printf("u r out of loop ");
    
    return 0;
}