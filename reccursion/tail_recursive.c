// A recursive function is said to be tail recursive if the recursive call is the last thing done by the function.
// There is no need to keep record of the previous state.

//WAP to write given number untill 0
#include<stdio.h>
void fun(int a)
{
    if (a==0)
    {
        return;
    }
    else
    {
        printf("%d ",a);
        return fun(a-1);   //nothing after this has to evaluate
                            //thats why tail recursion
    }
    
}
int main()
{
int n;
printf("enter the number: ");
scanf("%d",&n);
fun(n);
return 0;
}