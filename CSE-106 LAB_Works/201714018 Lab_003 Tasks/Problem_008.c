//Max using switch case
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Two Numbers:");
    scanf("%d%d",&a,&b);
    switch(a>b)
    {
    case 1:
        printf("%d is the Maximum Number!",a);
        break;
    case 0:
        printf("%d is the Maximum Number!",b);
        break;
    }

}
