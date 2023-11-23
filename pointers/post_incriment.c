#include<stdio.h>
int main()
{
    int a[]={12,5,321,4,3532,1,54,45,4,321};
    int *p=&a[5];
    
    printf("post incriment %d\n",*(p++));   //prints p and then incriments the value of p
    printf("incrimented val: %d",*p);         //prints the incrimented value of p

    return 0;
}
