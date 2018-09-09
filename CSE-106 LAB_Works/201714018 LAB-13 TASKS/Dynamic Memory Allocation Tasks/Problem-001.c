#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#define pf printf
#define sf scanf
int main()
{
    int n;
    pf("Enter n==>");
    sf("%d",&n);
    float *p=(float*)calloc(n,sizeof(float));
    int i;

    pf("Enter Elements==>");
    for(i=0;i<n;i++)
    {
        sf("%f",&p[i]);
    }
    float max=p[0];
    for(i=0;i<n;i++)
    {
        if(max<=p[i])
            max=p[i];
    }

    pf("Largest Element is==> %f",max);

    pf("\n\n\n===Continue To Problem 2===\n(Press Any Key)");
    getch();
    //Problem-002
    int m;
    pf("\n\nEnter m(to Resize)==>");
    sf("%d",&m);
    float *q=(float*)realloc(p,m*sizeof(float));

    pf("Enter the Rest Elements==>");
    for(i=n;i<n+m;i++)
    {
        sf("%f",&q[i]);
    }
    float sum=0;
    for(i=0;i<n+m;i++)
    {
        sum+=q[i];
    }
    pf("Average is==> %f",sum/(n+m));
    free(q);
}
