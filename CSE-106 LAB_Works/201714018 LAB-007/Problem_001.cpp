//Count uppercase and lower case
#include<stdio.h>
#include<string.h>
#define pf printf
#define sf scanf

int main()
{
    char str[1000];
    int len1=0,len2=0;
    gets(str);

    int len=strlen(str);

    for(int i=0;i<len;i++)
    {
        if(str[i]>='A'&&str[i]<='Z')  len1++;
        else if(str[i]>='a'&&str[i]<='z') len2++;
    }

    pf("Uppercase ==> %d",len1);
    pf("\nLowercase ==> %d",len2);

}
