#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#define pf printf
#define sf scanf
int main()
{
    char *p=(char*)malloc(10000*sizeof(char));
    pf("Enter a String==>");
    gets(p);
    pf("Your String Was==>");
    puts(p);
}
