#include<stdio.h>
int main()
{
    int cp,sp;
    int pf,ls;
    printf("enter cost price:\n");
    scanf("%d",&cp);
    printf("enter selling price:\n");
    scanf("%d",&sp);
    pf=sp-cp;
    ls=cp-sp;
    if(sp>cp)
    {
        printf("profit of ruppes: %d\n",pf);
        printf("\nprofit percentage is: %d %%",pf*100/cp);

    }
    else
    {
        printf("loss of ruppes: %d\n",ls);
        printf("loss of percenage is: %d %%",ls*100/cp);
    }

    return 0;


}
