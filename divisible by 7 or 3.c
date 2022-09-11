#include<stdio.h>
int main()
{
int x;
printf("enter a number");
scanf("%d",&x);
if(x%7==0&&x%3==0)
    printf("the value of %d is a divisible by 7 and 3",x);
else
printf("the x=%d is a not divisible by 7 and 3",x);
return 0;

}
