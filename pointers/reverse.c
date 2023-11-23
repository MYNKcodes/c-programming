#include<stdio.h>
#define N 5

int main()
{
    int arr[N],*p;
    printf("enter the %d elements:",N);
    for(p=arr;p<=arr+N-1;p++)
    {
        scanf("%d", p);
    }
    printf("in reverse is:================\n ");
    for(p=arr+N-1;p>=arr;p--)
    {
        printf("%d ",*p);
    }
return 0;
}