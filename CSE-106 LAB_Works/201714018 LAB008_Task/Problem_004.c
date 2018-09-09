#include<stdio.h>
#define pf printf
#define sf scanf
void intersection(int *a1,int *a2,int len1,int len2)
{
    int a,b;
    for(a=0;a<len1;a++)
    {
        for(b=0;b<len2;b++)
        {
            if(a1[a]==a2[b])
                pf("%d ",a1[a]);
        }
    }

}
int main()
{
    int c;
    int array1[]={1,3,5,7,9};
    int array2[]={3,6,9,12};

    int len1=5;
    int len2=4;

    intersection(array1,array2,len1,len2);



}
