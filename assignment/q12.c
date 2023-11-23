//wap to write all prime numbers under a given limit.
#include<stdio.h>
int main()
{
int n,count;
printf("Enter number: ");
scanf("%d",&n);
for (int i = 1; i <= n; i++)
{
    count = 0;
    for (int j = 2; j <= i/2; j++)
    {
        if (i%j==0)
        {
            count++;
        }
        
    }
    if (count ==0 && i!=1)
    {
    printf("%d ",i);
    }       
    
   
}
return 0;
}