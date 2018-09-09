// 1.Write a C program to capitalize first character of each word in a string.
#include<stdio.h>
#include<ctype.h>

int main()
{
	int i;
	char str[1000];
	puts("Input==>");
	gets(str);

	for(i=0;str[i]!='\0';i++)
	{
		if(i==0)									//for first char
			str[i]=toupper(str[i]);					//toupper function used <ctype.h>
		else
			str[i]=tolower(str[i]);					//tolower function is used

		if(isspace(str[i])!=0)						//isspace function for space finding <ctype.h>
			{
				str[i+1]=toupper(str[i+1]);
				i++;
			}
	}
	puts("Output==>");
	puts(str);
}
