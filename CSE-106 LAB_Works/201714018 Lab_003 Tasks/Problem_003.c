//Simple Calculator
#include<stdio.h>
int main()
{
    float a,b;
    char c;
    printf("Input Two Numbers: \n");
    scanf("%f%f",&a,&b);
    printf("\nEnter Choice:\na. Additiojn(+).\nb. Subtraction(-).\nc. Multiplication(*).\nd. Division(/).\n");
    scanf("%s",&c);

    if(c=='+')
        printf("\nAddition is= %.2f\n",a+b);
    else if(c=='-')
        printf("\nSubtraction is= %.2f\n",a-b);
    else if(c=='*')
        printf("\nMultiplication is= %.2f\n",a*b);
    else if(c=='/')
        printf("\nDivision is= %.3f\n",a/b);
}
