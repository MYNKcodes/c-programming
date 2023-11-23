#include<stdio.h>
int main()
{
    int num, i, j,k;
    printf("Enter the number: ");
    scanf("%d",&num);
    for ( i = 0; i < num; i++)
    {
        for ( j = 0; i < 2*(num-i)-1; j++)
        {
            printf(" ");
        }
        for ( k = 0; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}