//WAP in c for summation using recursive function
#include<stdio.h>
int sum(int a);
int main()
{
    int n;
    printf("Enter the max limit: ");
    scanf("%d",&n);
    sum(n);
    printf("the sum is: %d",sum(n));
    return 0;
}
int sum(int a)
{
   if (a==1)
   {
    return 1;
   }
   else
   {
    return a+sum(a-1);
   }
   

    
}