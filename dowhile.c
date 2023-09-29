#include <stdio.h>
int main()
{
    int i = 0, n;
    printf("enter number:\n");
    scanf("%d", &n);
    do
    {
        printf("numbers are:%d\n", i);
        i = i + 1;
    } while (i < n);
    return 0;
}
