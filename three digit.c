#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);

    if(99<x&&x<1000)
    printf("x=%d is three digit number",x);
    else
        printf("x=%d is not three digit number",x);
    return 0;
}
