#include<stdio.h>
int main()
{
int x;
printf("enter a number");
scanf("%d",&x);
if(x%2==0)
    printf("the value of %d is a divisible by 2",x);
else
    if(x%3==0)
    printf("the value of %d is a divisible by 3",x);
else
printf("the x=%d is a not divisible by 2 and 3",x);
return 0;

}
