//Traditional Method


#include<stdio.h>
int main()
{
    
    int arr[2][2]={{1,2},{3,4}};
    int row=2,col=2;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
    }
    return 0;
}

//method 2 USING POINTERS

#include<stdio.h>
int main()
{
    int *p;
    int arr[2][2]={{1,2},{3,4}};

    int row=2,column=2;
    for(p=&arr[0][0];p<=&arr[row-1][column-1];p++)
    {
        printf("%d ",*p);
    }
    return 0;
}