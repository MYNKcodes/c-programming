#include<stdio.h>
int nat(int a, int b);
int main()
{
    int a=1,n;
    printf("enter maximum limit : ");
    scanf("%d",&n);
    printf("--------------------------\n");
    nat(a,n);

    printf("\n");
    return 0;
    
}
int nat(int a, int b)
{
 if (a<=b)
 {
    printf("%d\n",a);
    nat(a+1,b);
 }
 
}