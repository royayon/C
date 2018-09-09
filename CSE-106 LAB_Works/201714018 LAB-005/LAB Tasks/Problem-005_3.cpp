#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
	int i,j,n,c=1;
	pf("Input 'n'==>");
	sf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		pf(" ");
		c=1;
		for(j=1;j<=2*i-1;j++)
		{
			
			if(j<=i)
			{
				pf("%d",c);
				c++;
			}
			else if(j>i)
			{
				c--;
				pf("%d",c-1);
				
			}
			
			
		}
		pf("\n");
	}
}
