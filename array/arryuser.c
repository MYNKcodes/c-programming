#include<stdio.h>
int main()
{
    int count;
    printf("enter the number of elements you want: ");
    scanf("%d",&count);
    int arry[1000];
    for(int i=0 ; i<count ; i++)
    {
        scanf("%d",&arry[i]);
    }
    printf("==========================");
    for(int i=0; i<count;i++)
    {
        printf("%d ",arry[i]);
    }
return 0;
}