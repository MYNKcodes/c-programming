#include<stdio.h>
int main()
{
    int num;
    printf("enter the no. of rows : ");
    scanf("%d",&num);
    for (char i = 65; i <=num+65; i++)
    {
        for (char j = 65; j <= i; j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}