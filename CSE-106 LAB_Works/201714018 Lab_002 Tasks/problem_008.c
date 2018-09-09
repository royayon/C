//daqy of a week
#include<stdio.h>
#define pf printf
#define sf scanf

int main()
{
    int n;
    pf("Enter the Number of a Day in a Week:");
    sf("%d",&n);
    if(n==1)
        pf("Sunday!");
    else if(n==2)
        pf("Monday!");
    else if(n==3)
        pf("Tuesday!");
    else if(n==4)
        pf("Wednesday!");
    else if(n==5)
        pf("Thursday!");
    else if(n==6)
        pf("Friday!");
    else if(n==7)
        pf("Saturday!");
}
