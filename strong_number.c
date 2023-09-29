#include<stdio.h>
int main()
{
    int rem, q,n,fact=1,result=0;
    printf("Enter number : ");
    scanf("%d",&n);
    q=n;
    while (q!=0)
    {
        rem = q%10;
        for (int i = 1; i <= rem; i++)
        {
            fact = fact * i;

        }
    result = result + fact;
    q=q/10;
    fact = 1;    
    }
  if (result == n)
  {
    printf("%d is a strong number",n);
  }
  else
  {
    printf("%d is not a astrong number",n);
  }
  return 0;  
    
}