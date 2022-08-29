#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%5==0)
        printf("the x value is divisible by 5");
    else
        printf("the value of x is not divisible by 5");
    printf("\nthe value of x is %d",x);
    return 0;

}

