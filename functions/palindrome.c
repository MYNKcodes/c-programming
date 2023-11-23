#include<stdio.h>
int input(int a)
{
    printf("enter number: ");
    scanf("%d",&a);
    return a;
}
int main()
{
    int a,q,rem,result=0;
    a=input(a);
    q=a;
    while (q!=0)
    {
        rem=q%10;
        result=result*10+rem;
        q=q/10;
    }
    if (result == a)
    {
        printf("%d is a pallindrome",a);
    }
    else
    {
        printf("%d is not a pallindrome",a);
    }
    return 0;
    
}