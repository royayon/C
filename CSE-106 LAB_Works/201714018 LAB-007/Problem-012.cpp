//print all VOWEL and CONSONANT characters separately.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[1000];
    int i;

    printf("Enter any string: ");
    gets(str);
    printf("\n");

    printf("VOWEL Characters are: ");
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' ||str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u')
            printf("%c ",str[i]);
    }
    printf("\n");

    printf("CONSONANT Characters are: ");
    for(i=0;str[i]!='\0';i++)
    {
        if(!(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' || str[i]=='u'))
            printf("%c ",str[i]);
    }
    printf("\n");

    return 0;
}
