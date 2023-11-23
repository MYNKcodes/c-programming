/*#include<stdio.h>
int main()
{
    int row,type;
printf("how many rows you want?\n");
scanf("%d",&row);
printf("type of alignment\n");
scanf("%d",type);
switch (type)
{
case 0:
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    break;
case 1:
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= row - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    break;

default:
    printf("enter valid number");
    break;
}
return 0;
}
*/
#include <stdio.h>
void triangle(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void inverse(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
#include <stdio.h>
int main()
{
    int rows, type;
    printf("how many rows you want?");
    scanf("%d", &rows);
    printf("press 1 for real and 0 for inverted\n");
    scanf("%d", &type);
    switch (type)
    {
    case 1:
        triangle(rows);
        break;
    case 0:
        inverse(rows);
        break;
    default:
        printf("enter valid choice");
        break;
    }
    return 0;
}
