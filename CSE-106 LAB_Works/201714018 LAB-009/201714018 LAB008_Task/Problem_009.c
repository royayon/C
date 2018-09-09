#include<stdio.h>
#define pf printf
#define sf scanf
void unionfn(int *a1,int *a2,int len1,int len2)
{
    int a,b;
    for(a=0;a<len1;a++)
    {
        pf("%d ",a1[a]);
    }

    for(b=0;b<len2;b++)
    {
        int flag=1;
        for(a=0;a<len1;a++)
        {

            if(a1[a]==a2[b])
                flag=0;

        }
        if(flag)
            pf("%d ",a2[b]);
    }

}
int main()
{
    int c;
    int array1[]={1,3,5,7,9};
    int array2[]={3,6,9,12};

    int len1=5;
    int len2=4;

    unionfn(array1,array2,len1,len2);



}
