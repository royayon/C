//Convert C2F &F2C
#include<stdio.h>

void main()
{
    int n;
    float c,f;
    printf("Enter 1 for C2F  and 2 for F2C:");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Celsius Temperature:");
        scanf("%f",&c);
        printf("Corresponding Fahrenheit Temperature:%f",9*c/5+32);
    }

    else if(n==2)
    {
        printf("Fahrenheit Temperature:");
        scanf("%f",&f);
        printf("Corresponding Celsius Temperature:%f",5*(f-32)/9);
    }
}

