#include<stdio.h>
#define pf printf
#define sf scanf
void swap_array(int *a1,int *a2,int len)
{
    int i,temp;
    for(i=0;i<len;i++)
    {
        temp=a1[i];
        a1[i]=a2[i];
        a2[i]=temp;
    }

}
int main()
{
    int len,c;
    int a1[5]={10,20,30,40,50};
   int a2[5]={1,2,3,4,5};
    len=5;

    swap_array(a1,a2,len);
    //output
    pf("Array1:");
    for(c=0;c<len;c++)
    {
        pf("%d ",a1[c]);

    }
    pf("\n");
    pf("Array2:");
    for(c=0;c<len;c++)
    {
        pf("%d ",a2[c]);
    }

}
