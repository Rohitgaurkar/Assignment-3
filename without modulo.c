#include<stdio.h>
int main()
{
    int y;
    printf("enter a number");
    scanf("%d",&y);
    printf("the value of x: %d\n",y);
    if(y&1==1)
        printf("odd number");
    else
        printf("even number");
    return 0;
}
