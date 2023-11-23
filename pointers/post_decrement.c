#include<stdio.h>
int main()
{
    int a[]={12,5,321,4,3532,1,54,45,4,321};
    int *p=&a[5];
    
    printf("post decriment %d (prints normal value) \n",*(p--));   //prints p and then decriments the value of p
    printf("decrimented val: %d",*p);         //prints the decrimented value of p

    return 0;
}
