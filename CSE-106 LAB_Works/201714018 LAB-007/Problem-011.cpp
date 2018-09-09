//print indexes of a character in a string
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char str[30],ch;
	int  ind[10],l,j;

	printf("Enter string: ");
	gets(str);

	printf("Enter character: ");
	ch=getchar();

	j=0;
	for(l=0; str[l]!='\0'; l++)
	{
		if(str[l]==ch)
        {
            ind[j]=l;
            j++;
        }
	}

	printf("Indexes==> ");
	for(l=0; l<j; l++)
		printf("%d  ",ind[l]);

	return 0;
}
