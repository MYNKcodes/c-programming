#include<stdio.h>
int main()
{
    int a[]={12,5,321,4,3532,1,54,45,4,321};
    int *p=&a[3];
    int *q= &a[5];
    printf("%d\n",p<=q);        //prints 1 for condition TRUE
    printf("%d\n",q<=p);        //prints 0 for condition FALSE
    q=&a[3];
    printf("%d",p==q);          //prints 1 for condition TRUE

    return 0;
}
