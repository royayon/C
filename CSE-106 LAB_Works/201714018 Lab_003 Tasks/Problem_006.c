//days in a month using switch case
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Month number:\n1.January.\n2.February.\n3.March.\n4.April.\n5.May.\n6.June.\n7.July.\n8.August.\n9.September.\n10.October.\n11.November.\n12.December.\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("This Month has 31 Days!");
        break;
    default:
        printf("This Month has 30 Days!");
        break;

    }
}
