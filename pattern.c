#include<stdio.h>
int main()
{
    int i,j,n,z;
    printf("enter n\n");
    scanf("%d",&n);
    for ( i = 1; i <=n ; i++)
    {
        for ( j = i; j < n; j++)
        {
            printf(" ");
        }
        for ( z = 0; z=2*i; z++)
        {
            printf("*");
        }
        printf(" \n");
        
        
    }
    

    return 0;
}
