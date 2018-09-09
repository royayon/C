//check divisible by 13&17 or not
#include<stdio.h>
int main()
{
    int a;
    printf("Input a number:");
    scanf("%d",&a);
    if(a%13==0&&a%17==0)
        printf("The number is divisible by 13 and 17!");
    else
        printf("The number is not divisible by 13 and 17!");
}
