//reverse a string
#include<stdio.h>
#include<string.h>
#define pf printf
#define sf scanf

int main()
{
    char str[20]="ABCDE";
    int len=5;
    char temp;

    for(int i=0;i<len/2;i++)
    {
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;

    }
    puts(str);
}
