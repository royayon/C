#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
	int n,max,t,flag=1;
	pf("Sequence: ");
	sf("%d",&n);
	max=n;
	while(1)
	{
		sf("%d",&t);
		if(t==0) break;
		if(max>t)
		{
			flag=0;
		}
		max=t;
		
	}
	if(flag==0)
		pf("Not Strictly Increasing");
	else
		pf("Strictly Increasing");
}
