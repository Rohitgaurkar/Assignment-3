#include <stdio.h>
int main()
{
    char ch;
    printf("enter a charater:");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
        printf("Lowercase Alphabate");
    else
        if(ch>='A'&&ch<='Z')
        printf("Uppercase Alphabate");
    else
        if(ch>='0'&&ch<='9')
        printf("Digit");
    else
        printf("special character");

    return 0;
}

