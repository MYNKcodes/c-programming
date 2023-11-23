//WAP to check the albhabet is vovel or consonent.
#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);
    if (ch == 'a' || ch =='e' || ch == 'i' || ch == 'o' || ch =='u')
    {
        printf("it is vovel");
    }
    else
    {
        printf("it is consonent");
    }
    
    return 0;
}