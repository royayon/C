//Grade using switch case
#include<stdio.h>
int main()
{
    int m,c;
    printf("Enter marks: ");
    scanf("%d",&m);
    c=m/10;
    switch(c)
    {
    case 10:
    case 9:
        printf("Grade A");
        break;
    case 8:
    case 7:
        printf("Grade B");
        break;
    case 6:
        printf("Grade C");
        break;
    case 5:
    case 4:
        printf("Grade D");
        break;
    case 3:
    case 2:
    case 1:
    case 0:
        printf("Grade F");
        break;
    default:
        printf("Invalid Marks");
        break;

    }
}
