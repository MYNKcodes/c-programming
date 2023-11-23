#include<stdio.h>
int digit(int a)
{ 
 int count=0;
    while (a!=0)
    {
        a=a/10;
        count++;
    }
    return count;
}

int main()
{
    int v;
    printf("enter number:- ");
    scanf("%d",v);
    int d= digit(v);
    printf("%d",d);
    return 0;
}
