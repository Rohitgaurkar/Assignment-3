#include<stdio.h>
int main()
{
    int v,w,x,y,z;
    printf("enter a marks:\n");
    scanf("%d %d %d %d %d",&v,&w,&x,&y,&z);
    if(v<=100&&w<=100&&x<=100&&y<=100&&z<=100)
    {
        if(v>=33&&w>=33&&x>=33&&y>=33&&z>=33)
            printf("pass");
        else
            printf("fail");
    }
    else
        printf("gadhe ho tum");


    return 0;


}
