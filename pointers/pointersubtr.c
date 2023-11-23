#include<stdio.h>
int main()
{
    int a[]={62,9563,69,5,421,2,4,9};
    int i=3,j=5;
    int *p = &a[i];
    int *q;
    q=p-1;      // shifted value 1 place back 
   

    printf("hehh %d \n %d",*p,*q);
    return 0;
}