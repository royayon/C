//swap function using pointer
#include<stdio.h>
#include<string.h>
#define pf printf
#define sf scanf

int swapfunc(int *a,int *b)
{
   int temp=*a;
   *a=*b;
   *b=temp;
}

int main()
{
    int a=12;
    int b=24;
    pf("\n\t\t<<==Before Swaping Using Pointer==>>\n\n\t\ta==> %d \n\t\tb==> %d",a,b);
    swapfunc(&a,&b);
    pf("\n\n\t\t<<==After Swaping Using Pointer==>>\n\n\t\ta==> %d \n\t\tb==> %d\n",a,b);
}
