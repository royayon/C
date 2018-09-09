//Check Leap Year
#include<stdio.h>

void main()
{
    int c;
    printf("Enter a Year to check:");
    scanf("%d",&c);
    if((c%4==0)&&((c%100!=0)||(c%400==0)))
        printf("IT is a Leap Year.");
    else
        printf("IT is not a Leap Year.");

}

