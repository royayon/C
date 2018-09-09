#include<stdio.h>
#include<strings.h>
#define pf printf
#define sf scanf
#define N 2
struct books{
    char title[20];
    char author[20];
    char sub[20];
    int id;

}B[20];
void store()
{
    int i;
    pf("\n=============================================================\n");
    pf("\nStore Information\n");
    pf("\n=============================================================\n");
    for(i=0;i<N;i++)
    {
        pf("\n\nEnter information of Books %d==>\n",i+1);
        pf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        getchar();
        pf("\nEnter Title:");
        gets(B[i].title);
        pf("\nEnter Name of The Author:");
        gets(B[i].author);
        pf("\nEnter Sub:");
        gets(B[i].sub);
        pf("\nEnter Book id:");
        sf("%d",&B[i].id);

    }

}
void display()
{
    system("CLS");
    system("COLOR FC");

    int i;
    pf("\n=============================================================\n");
    pf("\nDisplaying Information\n");
    pf("\n=============================================================\n");
    for(i=0;i<N;i++)
    {
        pf("\n\nDisplaying information of Student %d==>\n",i+1);
        pf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~");


        pf(" \nTitle: %s",B[i].title);

        pf(" \nAuthor Name: %s",B[i].author);

        pf(" \nSUB: %s",B[i].sub);

        pf(" \nBook id: %d",B[i].id);




    }
}
int main()
{
    pf("<==C program to store and display information Books==>");
    store();
    display();
}
