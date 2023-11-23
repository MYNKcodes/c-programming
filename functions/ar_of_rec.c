#include<stdio.h>
int ar(int a, int b);

int main()
{
int l,b,area;
printf("enter length & width : ");
scanf("%d %d",&l,&b);
area=ar(l,b);
printf("the area is %d",area);
return 0;
}
int ar(int a, int b)
{   
    int ar = (a*b);
    return ar;
}