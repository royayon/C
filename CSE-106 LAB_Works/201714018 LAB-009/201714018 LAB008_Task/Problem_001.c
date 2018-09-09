#include<stdio.h>
#define pf printf
#define sf scanf
void modify(int *p,int len)
{
    int i,c=1;
    for(i=0;i<len;i++)
    {
        p[i]=p[i]+c;
        c++;
    }

}
int main()
{
    int len,c;
    int array1[5]={10,10,10,10,10};
    len=5;

    modify(array1,len);
    //output
    pf("Array[] = {");
    for(c=0;c<len;c++)
    {
        pf("%d ",array1[c]);

    }
    pf("}");


}

