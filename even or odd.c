#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    printf("the value of x: %d\n",a);
    if(a%2==0)
        printf("even number");
    else
    printf("odd number");
    return 0;
}
