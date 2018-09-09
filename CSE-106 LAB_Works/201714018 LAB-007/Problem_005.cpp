//Frequency of characters
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,len;

    gets(str);
    len=strlen(str);

    for(i=0;i<len;i++)
    {
        int c=0;
        for(j=0;j<len;j++)
        {
            if(str[i]==str[j])
            {
                c++;
                if(i>j)                     //for cancelling adjacent chars like aaaaaaaa
                {
                    break;                  //onle first tym will be counted
                }
            }
        }
        if(i<j)
            printf("%c occurred %d times\n",str[i],c);
    }
    return 0;
}

