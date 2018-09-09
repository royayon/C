//10 num input and sum and avg without array
#include<stdio.h>
int main()
{
    int i,a,sum=0;
    printf("Enter 10 Numbers==>");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&a);
        sum+=a;
    }
    printf("Sum of 10 Numbers: %d\n",sum);
    printf("Average of 10 Numbers: %f",(.1*sum));


}
