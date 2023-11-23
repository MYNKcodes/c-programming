//wap to check weather the umber is prime or not
#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,rut, count=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    rut=sqrt(a);
    i=a;
    for(i=2;i<=rut;i++)
    {
        if (a%i==0)
        {
            count = 1;
        }
        
    }
    if ((count == 0 && a!=1) || a==2 || a==3)
    {
        printf("%d is a prime number.",a);
    }
    else
    {
        printf("%d is not a prime number.",a);
    }
    printf("\nby mayank shukla");
    return 0;

}
