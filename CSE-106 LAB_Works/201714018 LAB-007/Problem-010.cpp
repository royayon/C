//Replace Lowercase Characters by Uppercase & Vice-Versa
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[1000];
    int i;
    puts("Input==>");
    gets(str);
    int len=strlen(str);
    for(i=0;i<len;i++)
    {
        str[i]=islower(str[i])?toupper(str[i]):tolower(str[i]);
    }
    puts(str);
}
