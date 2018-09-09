//recur sum series : 1+ 1/2 + 1/3 + 1/4 +......+ 1/n
#include<stdio.h>
#define pf printf
#define sf scanf
float recur_OneByN(float n) //it cannot be an integer(int)
{
    if(n==1)
        return 1;
    else
        return 1/n+recur_OneByN(n-1);
}
int main()
{
    float n;
    pf("You are calculating Series Sum: 1+ 1/2 + 1/3 + 1/4 +......+ 1/n ==>");
    pf("\nEnter the value of 'n'==>");
    sf("%f",&n);
    pf("\nThe Sum of the Series==>");
    pf("\nThe sum is==>> %.3f",recur_OneByN(n));
}
