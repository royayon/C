#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
    int arr[1000];
    int n,i;
    pf("Enter Array size: ");
    sf("%d",&n);

    pf("Input Array: ");
    for(i=0;i<n;i++)
    {
        sf("%d",&arr[i]);
    }

    int even=0,odd=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }

    pf("Total Even Elements = %d     Total Odd Elements = %d",even,odd);

}

