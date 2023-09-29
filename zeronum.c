//WAP to allow user to enter the integer until he enters zero using while loop
#include<stdio.h>
int main(){
    int a;
    printf("enter number: ");
    scanf("%d",&a);
    while (a != 0)
    {
        printf("enter number: ");
        scanf("%d",&a);
    }
    printf("you are out of the loop");
    return 0;
}