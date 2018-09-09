//percentage of a sub marks
#include<stdio.h>
int main()
{
    int m,percentage;
    printf("Input marks:");
    scanf("%d",&m);
    percentage=(m*100)/100;
    printf("Percentage is==>%d \n",percentage);
    //grade
    if(m<=100&&m>=90)
        printf("Grade is A");
    else if(m<90&&m>=80)
        printf("Grade is B");
    else if(m<80&&m>=70)
        printf("Grade is C");
    else if(m<70&&m>=60)
        printf("Grade is D");
    else if(m<60&&m>=40)
        printf("Grade is E");
    else if(m<40)
        printf("Grade is F");
}
