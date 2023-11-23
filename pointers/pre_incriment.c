#include<stdio.h>
int main()
{
    int a[]={12,5,321,4,3532,1,54,45,4,321};
    int *p=&a[5];
    
    printf("normal %d\n",*p);       //prints the value of p
    printf("pre incriment %d\n",*(++p));   //incriments the value of p then prints it

    return 0;
}
