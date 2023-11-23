#include<stdio.h>
int main()
{
    int marks[60],i,sum = 0, count = 0,average;
    for ( i = 0; i < 60; i++)
    {
        scanf("%d",&marks[i]);
        sum = sum + marks[i];
    }
    average = sum/60;
    for ( i = 0; i < 60; i++)
    {
        if (marks[i]>average)
        {
            count ++;
        }
        printf("no. of students who scored more than average marks is %d\n",count);
    }
   return 0; 
}