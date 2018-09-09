//switch case Menu
#include<stdio.h>

int main()
{
    int r,c,h;
    float pi=3.1416;
    char n;
    printf("Please select your choice to choose a calculation:\nCircle: a\nTriangle: b\nCylinder: c\n");
    scanf("%c",&n);
    switch(n)
    {
    case 'a':
        printf("Input r:");
        scanf("%d",&r);
        printf("Area= %.2f\nPerimeter= %.3f",pi*r*r,2*pi*r);
        break;
    case 'b':
        printf("Input c and h:");
        scanf("%d%d",&c,&h);
        printf("Area= %.2f\nPerimeter= %d",3*h*.5,2+3+c);
        break;
    case 'c':
        printf("Input r and h:");
        scanf("%d%d",&r,&h);
        printf("Volume= %.2f\nArea= %.3f",pi*r*r*h,2*pi*r*(1+h));
        break;

    }
}
