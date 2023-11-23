#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("enter no. of rows: ");
    scanf("%d",&a);
    printf("enter no. of columns: ");
    scanf("%d",&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("*");
        }
    printf("\n");
    }
}