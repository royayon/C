#include<stdio.h>
#define pf printf
#define sf scanf
void append(int *a1,int *a2,int len1,int len2)
{
    int i;
    for(i=0;i<len1+len2;i++)
    {
        if(i>=len1)
            a1[i]=a2[i-len1];

    }
}
int main()
{
    int c;
    int array1[50];
    array1[0]=5;
    array1[1]=6;
    array1[2]=7;

    int array2[]={1,2,3,4,5};

    int len1=3;
    int len2=5;

    append(array1,array2,len1,len2);
    //output
    pf("Array1[] = {");
    for(c=0;c<len1+len2;c++)
    {
        pf("%d ",array1[c]);

    }
    pf("}");


}



