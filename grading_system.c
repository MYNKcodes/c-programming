//grading system using switch

#include<stdio.h>
int main()
{
int marks;
printf("enter your marks:");
scanf("%d",&marks);
if (marks>100)
{
    printf("dont be oversmart with me, you bastard");
}

switch (marks/10)
{
case 10:
case 9:
    printf("A grade");
   break;
case 8:
    printf("B grade");
    break;
case 7:
    printf("C grade");
    break;
case 6:
    printf("D grade");
    break;
case 5:
    printf("E grade");
    break;
case 4:
    printf("E- grade");
    break;
default:
    printf("failed");
    break;
}
return 0;
}