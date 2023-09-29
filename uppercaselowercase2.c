 //check whether character given is uppercase or lowercase by using ascii code

#include<stdio.h>
int main(){
    char ch;

    printf("enter character:");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90)
    {
        printf("it is uppercase");
    }
    else
    printf("it is lowercase");
    return 0;
}