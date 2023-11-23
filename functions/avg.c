float average(int a, int b, int c);
#include<stdio.h>
int main()
{
    int m,n,o;
    float av;
printf("enter the 3 numbers: ");
scanf("%d\n%d\n%d",&m,&n,&o);
av=average(m,n,o);
printf("the averaGE is %f ",av);
return 0;

}
float average(int a, int b, int c)
{
    int s=a+b+c;
    float ab = s/3;
    return ab;
}
