#include <stdio.h>
int main()
{
    int a[] = {65, 32, 32, 56, 5};
    int sum = 0, *p;
    for (p = &a[0]; p <= &a[4]; p++)
    {
        sum += *p;
    }
    printf("the sum is %d", sum);
    return 0;
}