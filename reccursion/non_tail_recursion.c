/*A recursive function is said to be non- tail recursive if the 
recursive call is not the last thing done by the function.
After returning back, there is some something left to evaluate.*/


//WAP to write number from 1 to given number;



#include<stdio.h>
void fun(int a)
{
    if (a==0)
    {
        return;
    }
        fun(a-1);
        printf("%d",a);
    
}
int main()
{
int n;
printf("enter number: ");
scanf("%d",&n);
fun(n);
return 0;
}