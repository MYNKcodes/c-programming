#include<stdio.h>


void minmax(int a[],int len,int *min,int *max)
{
    *min=*max=a[0];
    int i;
    for ( i = 1; i < len; i++)
    {
        if (a[i]<*min)
        {
            *min=a[i];
        }
        if(a[i]>*max)
        {
            *max=a[i];
        }
        
    }
    
}


int main()
{
    int a[]={56,54,48,456,132,846,48,1,312,54,434,2,343543,5435,434,4342};
    int min,max,len;  //passing addresses of these variable to the function above
    len=sizeof(a)/sizeof(a[0]);
    minmax(a,len,&min,&max);   //taking addresses because we cannot change the value of min and max outside main function
    printf("the min value is %d and max. value is %d",min,max);
    return 0;
}