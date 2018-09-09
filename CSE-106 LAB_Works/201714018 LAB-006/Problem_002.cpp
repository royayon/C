//Sorting String
#include<stdio.h>
#include<string.h>
#define pf printf
#define sf scanf

int main()
{
    char str[1000];
    gets(str);
    int len=strlen(str);

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
    puts(str);

}
