//max num between 3 nums
#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Input 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
        max=a;
    else
        max=b;

    if(max<c)
        max=c;

    printf("Maximum number is==> %d",max);

}
