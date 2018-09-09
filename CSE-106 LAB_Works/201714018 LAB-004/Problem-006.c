//Check if its a Palindrome Number
#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
    int n,c=0,i,sum=0,m,p,rev=0;;
    pf("Enter a number to Check: ");
    sf("%d",&n);
    m=n;
    p=n;
    while(m!=0)
    {
        m=m/10;
        c++;
    }
    for(i=1;i<=c;i++)
    {
        rev=rev*10+(n%10);
        n=n/10;
    }
    if(rev==p)
        pf("Its a Palindrome Number!");
    else
        pf("Its not a Palindrome Number!");

}
