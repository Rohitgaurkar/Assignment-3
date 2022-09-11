#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%100==0)
    {
        if(x%400==0)
            printf("leap year");
        else
           printf("non leap year");
    }
    else
    { if(x%4==0)
          printf("leap year");
       else
          printf("Non leap year");
    }
       return 0;
}
