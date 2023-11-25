#include<stdio.h>
int main()
{
int arry[1000];
int len;
printf("Enter the no of elements you want: ");
scanf("%d",&len);
printf("Enter the elements: \n");
for(int i=0;i<len;i++)
{
    scanf("%d",&arry[i]);
}
printf("The array is: \n");
for(int i=0;i<len;i++)
{
    printf("%d ",arry[i]);
}
//now for finding the min and max of the array
int min=arry[0],max=arry[0];
for (int i = 1; i < len; i++)
{
    if (arry[i]<min)
    {
        min = arry[i];
    }
    else if (arry[i]>max)
    {
        max=arry[i];
    }
    
    
}
printf("\nmin element is %d and maximum element is %d",min,max);

return 0;
}