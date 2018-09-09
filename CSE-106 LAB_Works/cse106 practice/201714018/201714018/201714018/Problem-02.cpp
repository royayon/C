//  2.Write a C program to check if two Strings are anagram or not.
#include<stdio.h>
#include<string.h>

void bubbleSort(char str[], int len);


int main()
{
	char str[1000],str1[1000];
	puts("Firts Word==>");
	gets(str);
	puts("Second Word==>");
	gets(str1);
	
	int len=strlen(str);
	int len1=strlen(str1);
	
	bubbleSort(str,len);
	bubbleSort(str1,len1);
	
	if(strcmp(str,str1)==0)
		printf("\nAnagram");
	else
		printf("\nNot anagram");
	
}

void bubbleSort(char str[], int len)
{
	//Bubble Sort
    for (int i = 0; i < len-1; i++)
    {
         for (int j = 0; j < len-i-1; j++)
         {
            if (str[j] > str[j+1])
            {
                char temp;
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }

         }
    }
}
