#include<stdio.h>
int main()
{
    int number,count=0,cnt,rem,mul=1,q,result=0;
    printf("enter number: ");
    scanf("%d",&number);
    q = number;
    while (q !=0)
    {
        q=q/10;
        count++;
    }
    q = number;
    cnt=count;
    while (q!=0)
    {
        rem = q% 10;
        while (cnt!=0)
        {
            mul = mul*rem;
            cnt--;
        }
        result = result + mul;
        cnt = count;
        q=q/10;
        mul = 1;
        
    }
if (result == number)
{
    printf("%d is an amstrong number",number);
}
else
    (
        printf("%d is not an amstrong number",number)
    );

return 0;
}