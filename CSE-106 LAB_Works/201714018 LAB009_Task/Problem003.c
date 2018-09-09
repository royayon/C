#include<stdio.h>
#define pf printf
#define sf scanf
struct Distance{
    int inch;
    int feet;
};
void printsum(struct Distance *a,struct Distance *b)
{
    pf("Sum==>%d\'-%d\" " ,a->feet+b->feet , a->inch+b->inch);
}

int main()
{
    struct Distance dis1,dis2,*a,*b;

    pf("Enter first distances==>");
    sf("%d %d",&dis1.feet,&dis1.inch);
    pf("Enter second distances==>");
    sf("%d %d",&dis2.feet,&dis2.inch);

    a=&dis1;
    b=&dis2;

    printsum(a,b);

}
