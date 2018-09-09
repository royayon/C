//Check weather a Character is Vowel or Consonant
#include<stdio.h>

void main()
{
    char c;
    printf("Enter the Character:");
    scanf("%c",&c);
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        printf("IT is a Vowel");
    else
        printf("IT is a Consonant");

}
