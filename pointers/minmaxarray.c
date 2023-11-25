#include<stdio.h>
void minmax(int a[],int len,int *min,int *max)
{
    *min = a[0],*max= a[0];
    for(int i=1;i<len;i++)
    {
        if(a[i]<*min)
        {
            *min = a[i];
        }
        else if (a[i]>*max)
        {
            *max=a[i];
        }
        
    }
}
int main()
{
int arry[1000];
int len,min,max;
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


//now for finding the min and max of the array with pointers
minmax(arry,len,&min,&max);
printf("\nthe min is %d and max value is %d",min,max);


//the method below is for without the use of the poiners


// int min=arry[0],max=arry[0];
// for (int i = 1; i < len; i++)
// {
//     if (arry[i]<min)
//     {
//         min = arry[i];
//     }
//     else if (arry[i]>max)
//     {
//         max=arry[i];
//     }
    
    
// }
// printf("\nmin element is %d and maximum element is %d",min,max);

return 0;
}