 //area of circle, volume of cylinder.

#include<stdio.h>
int main(){
    int radius, height;
    float pie, area;
    pie=3.14;
    printf("enter radius");
    scanf("%d",&radius);
    printf("enter height:");
    scanf("%d",&height);

    area=pie*radius*radius;
    printf("area is: %f",area*height);
    return 0;
}