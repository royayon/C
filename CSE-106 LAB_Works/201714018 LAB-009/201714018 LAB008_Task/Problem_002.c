#include<stdio.h>
#define pf printf
#define sf scanf
void modify(int *p,int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        p[i]=p[i]*p[i];

    }

}
int main()
{
    int len=5,c;
    int array1[5]={1,2,3,4,5};


    modify(array1,len);
    //output
    pf("Array[] = {");
    for(c=0;c<len;c++)
    {
        pf("%d ",array1[c]);

    }
    pf("}");


}


