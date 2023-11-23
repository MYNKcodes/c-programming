#include<stdio.h>
int main()
{
    int num,i,j;
    printf("enter nu. of rows: ");
    scanf("%d",&num);
    for ( i = 0; i <= num; i++)
    {
        for ( j = 0; i < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}