//to find size of an array

#include<stdio.h>
int main()
{
 int a[]={1,5,6,3,2,5,1,4,2,6,45,312,32,2,465,64,312,45,312,48,321,46,89,4686,496831,31,894,8,46,0,5465,3,131,32,31,31};
 
    //  sizeof(a)=represents size of total array
    //  sizeof(a[1])= represents size of one element of array
    //  devision of both will give number of elements in array
 
 printf("%d",sizeof(a)/sizeof(a[0]));
 return 0;
}