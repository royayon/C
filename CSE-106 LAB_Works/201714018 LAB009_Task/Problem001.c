#include<stdio.h>
#define pf printf
#define sf scanf
struct dis{
    int inch;
    int feet;
};
int main()
{
    struct dis dis1,dis2;
    pf("Enter first distances==>");
    sf("%d %d",&dis1.feet,&dis1.inch);
    pf("Enter second distances==>");
    sf("%d %d",&dis2.feet,&dis2.inch);

    pf("Sum==>%d-%d " ,dis1.feet+dis2.feet , dis1.inch+dis2.inch);
}
