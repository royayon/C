//Check if its PRIME?
#include<stdio.h>
#define pf printf
#define sf scanf
int isPrime(int n)
{
	int flag=1;
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}
int main()
{
    int n,i,flag=0;
    pf("Enter a NUMBER to CHECK: ");
    sf("%d",&n);
//    if(n<=3&&n>0) pf("Its a PRIME Number !");
//    else
//    {
//         for(i=2;i<=sqrt(n);i++)
//         {
//             if(n%i==0)
//                {flag=1;
//                break;}
//         }
//         if(flag==0) pf("Its a PRIME Number !");
//         else pf("Its not a PRIME Number !");
//
//    }
	if(isPrime(n)==1) pf("Prime");
	else pf("NOt Prime");

}
