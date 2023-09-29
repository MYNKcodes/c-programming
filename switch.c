#include<stdio.h>
int main(){
    int x=2;
    switch (x)
    {
    case 1: printf("it is 1\n");
    
        break;
    case 2: printf("it is 2\n");
        break;
    case 3: printf("it is 3\n");
        break;   
    default: printf("it is neither 1 nor 2 nor 3\n");
        break;
    }
}