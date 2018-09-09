#include<stdio.h>
#define pf printf
#define sf scanf

int main()
{
    int arr[1000];
    int n,i,j;
    pf("Enter Array size: ");
    sf("%d",&n);

    pf("Array: ");
    for(i=0;i<n;i++)
    {
        sf("%d",&arr[i]);
    }

    //BubbleSort
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }


    pf("Ascending order:");
    for(i=0;i<n;i++)
    {
        pf("%d ",arr[i]);
    }

}


