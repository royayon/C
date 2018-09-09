//vowel consonant using switch
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a letter:");
    scanf("%c",&c);
    switch(c)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("The letter is a Vowel!");
        break;
    default:
        printf("The letter is a Consonant!");
        break;

    }
}
