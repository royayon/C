#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
	int i,j,n;
	pf("Input 'n'==>");
	sf("%d",&n);
	int c;
	for(i=1;i<=n;i++)
	{
		c=2*i-1;
		for(j=i;j<=n;j++)
		{
			pf("%d",c);
			c+=2;
		}
		
		pf("\n");
	}
}
