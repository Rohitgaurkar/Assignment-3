#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter value of triangal side\n");
    scanf("%d %d %d",&a,&b,&c);
    if(b+c>=a&&a+c>=b&&a+b>=c)
    {
        printf("triangle");
    }
    else
        printf("triangle not");
    return 0;
}
