 //check whether character given is uppercase or lowercase by using Alphabets series
//method 1
#include<stdio.h>
int main(){
    char ch;

    printf("enter character:");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z')
    {
        printf("it is uppercase");
    }
    else

printf("it is lowercase");
return 0;
}