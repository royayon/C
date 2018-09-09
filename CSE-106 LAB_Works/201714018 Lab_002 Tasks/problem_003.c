//find roots of a quadratic eqn
#include<stdio.h>
int main()
{
    int a,b,c,r1,r2,D;
    printf("Input a,b,c of a quadratic eqn:");
    scanf("%d%d%d",&a,&b,&c);
    D=(b*b-4*a*c);
    r1=((-1*b)+sqrt(D))/(2*a);
    r2=((-1*b)-sqrt(D))/(2*a);
    printf("The value of the Determination is==>%d ",(D));

    if(D==0)
        printf("Root is==>%d ",r1);
    else if(D>0)
        printf("Roots are==>%d ; %d",r1,r2);
    else if(D<0)
        printf("Roots are imaginary");
}
