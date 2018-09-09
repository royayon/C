// Reverse Letter in Each Word of the Entered String
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    char wrd[20];

    puts("Input==>");
    gets(str);
    int i = 0, j = 0;

    while (str[i] != '\0')
    {
        if (str[i] != ' ')          //each word is stored in wrd[] array
        {
            wrd[j] = str[i];
            j++;
        }
        else
        {
            wrd[j] = '\0';
            printf("%s", strrev(wrd));          //when a space is found reverse thw wrd array
            printf(" ");
            j = 0;
        }
        i++;
    }

    wrd[j] = '\0';                          //for the last word because while wont work when a null char is found
    printf("%s", strrev(wrd));
}
