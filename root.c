#include<stdio.h>
int main()
{
    int a,b,c;
    int result;
    printf("enter a number");
    scanf("%d %d %d",&a,&b,&c);
    result=b*b-4*a*c;
    printf("result=%d",result);
    if(result>0)
             printf("%d is real and distinct root",result);
    else
        if(result=0)
             printf("%d is real and equal root",result);
    else
        if(result<0)
             printf("%d is imaginary root",result);
    return 0;
}
