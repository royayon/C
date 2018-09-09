//Finding Quotient and Remainder
#include<stdio.h>
void main()
{
    int q;
    float a,b,t;
    printf("Enter Two Numbers:");
    scanf("%f%f",&a,&b);
     t=a/b;
    q=a%b;
    printf("Quotient:%f\nRemainder:%d",t,q);
}


