//equal strings
#include<stdio.h>
#include<string.h>
#define pf printf
#define sf scanf

int main()
{
    char str1[20]="ABCDE";
    int len1=5;
    char str2[20]="Hello";
    int len2=5;
    int flag=1;

    if(len1==len2)
    {
        for(int i=0 ; i<len1 ; i++)
        {
            if(str1[i]!=str2[i])
            {
                flag=0;
                break;
            }
        }
    }
    else
        flag=0;


    if(flag)
        puts("Equal");
    else
        puts("Not Equal");
}
