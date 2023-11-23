#include<stdio.h>
int main()
{
    int arr[2][5]={{2,4,6,8,10},{12,14,16,18,20}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ",arr[i][j]);
        }
        
    }

    printf("\n%d",sizeof(arr));
return 0;
}