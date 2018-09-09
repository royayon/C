#include<stdio.h>
#include<math.h>
#define pf printf
#define sf scanf
int main()
{
	int n,i,j,c=0,prime;
	pf("Input:");
	sf("%d",&n);
	for(i=2;i<=n;i++)
	{
		prime=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				prime=0;
			}
	
		}
		if(prime)
			pf("%d ",i,c++);
		
	}
	pf("\nTotal Prime: %d",c);
	
}
