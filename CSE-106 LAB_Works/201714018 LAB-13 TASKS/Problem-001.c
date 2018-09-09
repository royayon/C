#include<stdio.h>
#include<stdlib.h>
#define pf printf
#define sf scanf
#define N 8
unsigned int change(unsigned int A, int pos, int val)
{
    int i=val;
    i=i<<pos;
    int j=A|i;
    return j;

}
void decToBin(int A)
{
    int ara[N]={0};
    int i=0;
    while(A!=0)
    {
        ara[N-i-1]=A%2;
        A/=2;
        i++;
    }
    int t;
    for(t=0;t<N;t++)
    {
        if(t==4)
            pf(" ");
        pf("%d",ara[t]);
    }
}
int main()
{
    int A,pos,val;
    pf("Enter an Integer==>");
    sf("%d",&A);
    pf("Enter Position to change==>");
    sf("%d",&pos);
    pf("Enter The Value(0/1)==>");
    sf("%d",&val);

    decToBin(change(A,pos,val));


}
