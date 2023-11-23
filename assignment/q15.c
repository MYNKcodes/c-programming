// WAP in c for finding area and perimeter of rectancle
#include <stdio.h>
int area(int length, int width);
int perimeter(int length, int width);
int main()
{
    int l, b;
    printf("enter length: ");
    scanf("%d", &l);
    printf("Enter width: ");
    scanf("%d", &b);
    printf("The area of the rectangle is: %d\n", area(l, b));
    printf("The perimeter of the rectangle is: %d", perimeter(l, b));
    return 0;
}
int area(int length, int width)
{
    int area = length * width;
    return area;
}
int perimeter(int length, int width)
{
    int perimeter = 2 * (length + width);
    return perimeter;
}