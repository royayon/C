//Check weather a Character is an Alphabet or not
#include<stdio.h>

void main()
{
    int c;
    printf("Enter the Character:");
    scanf("%d",&c);
    if((c>=65&&c<=91)||(c>=97&&c<=123))
        printf("IT is an Alphabet");
    else
        printf("IT is not an Alphabet");

}
