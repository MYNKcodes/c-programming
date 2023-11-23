#include<stdio.h>
int areaofrect(int length, int breadth)
{
    int area;
    area= length * breadth;
    return area;

}
int main(){
    int l=10,b=2,area;

    area = areaofrect(l,b);
    printf(" area= %d",area);

    return 0;
}