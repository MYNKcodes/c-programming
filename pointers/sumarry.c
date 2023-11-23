#include <stdio.h>

int addin(int b[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += b[i];
    }
    return sum;
}

int main()
{
    int a[] = {1, 2, 3, 4, 500};
    int len;
    len = sizeof(a) / sizeof(a[0]);
    printf("the sum is %d ", addin(a, len));
    return 0;
}