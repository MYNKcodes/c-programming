
#include<stdio.h>
#include<math.h>
int main()
{
    int x,val,count=0;
    int rut;
    printf("enter number: ");
    scanf("%d",&x);
    rut=ceil(sqrt(x));
    val=x;
    for (int i = 2; i <= rut; i++)
    {
        if (val%i==0)
        {
            count = 1;
        }
        
    }
    if ((count==0 && val!=1) || val==2 || val==3)
    {
        printf("%d is a prime number",val);
    }
    else
    {
        printf("%d is not a prime number",val);
    }
    return 0;
}