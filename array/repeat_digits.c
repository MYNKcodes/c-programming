//check weather the digit is repeated or not.
#include<stdio.h>
int main()
{
    int view[10]={0};   //phase 1
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int rem;        //phase 2
    while (n>0)
    {
        rem = n%10;
        if (view[rem]==1)
        {
            break;
        }
        view[rem]=1;
        n=n/10;
    }
    
    if (n>0)        //phase 3
    {
        printf("Yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}