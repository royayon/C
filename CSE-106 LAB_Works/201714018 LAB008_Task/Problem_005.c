#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
    int arr[1000];
    int n,i;
    pf("Enter Array size: ");
    sf("%d",&n);

    pf("Input Array Elements: ");
    for(i=0;i<n;i++)
    {
        sf("%d",&arr[i]);
    }


    int max=arr[0];
    for(i=1;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }

    pf("Maximum = %d",max);

}
