#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("enter the height: ");
    scanf("%d",&a);
    printf("Enter the base: ");
    scanf("%d",&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
    printf("\n");
    }
return 0;
}
