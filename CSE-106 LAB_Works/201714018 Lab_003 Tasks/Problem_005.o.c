//Simple Calculator using switch case
#include<stdio.h>
int main()
{
    float a,b;
    char c;
    printf("Input Two Numbers: \n");
    scanf("%f%f",&a,&b);
    printf("\nEnter Choice:\na. Additiojn(+).\nb. Subtraction(-).\nc. Multiplication(*).\nd. Division(/).\n");
    scanf("%s",&c);

    switch(c)
    {
        case '+':
            printf("\nAddition is= %.2f\n",a+b);
            break;
        case '-':
            printf("\nSubtraction is= %.2f\n",a-b);
            break;
        case '*':
            printf("\nMultiplication is= %.2f\n",a*b);
            break;
        case '/':
            printf("\nDivision is= %.3f\n",a/b);
            break;
    }
}

