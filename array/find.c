#include<stdio.h>
int main()
{
    int n,index=-1;
    int arry[5] = {1,2,3,4,5};
    printf("Enter the number you want to check: ");
    scanf("%d",&n);
    for(int i=0;i<5;i++)
    {
        if (arry[i]==n)
        {   index = 1;
            printf("%d",index);
            
        }
        
    }
    return 0;
}