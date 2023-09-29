 //for finding average of 3 numbers

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 1st number:-");
    scanf("%d",&a);
    printf("Enter 2nd Number:-");
    scanf("%d", &b);
    printf("Enter 3rd number:-");
    scanf("%d",&c);
    printf("Average of the given three numbers is:- %d", (a+b+c)/3);
    return 0;
}