 //for finding leap  year

#include<stdio.h>
int main(){
    int a;
    printf("enter year:");
    scanf("%d",&a);
    if (a%4==0)
    {
        printf("it is a leap year");
    }
    else
    printf("this is not a leap year");
    return 0;
}