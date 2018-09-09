#include<stdio.h>
#include<strings.h>
#include<conio.h>
#define pf printf
#define sf scanf
#define N 1
struct students{
    int Roll_number;
    char First_name[20];
    char Last_name[20];
    int age;
    char gender[20];
}S[10];
void store()
{
    int i;
    pf("\n=============================================================\n");
    pf("\nStore Information\n");
    pf("\n=============================================================\n");
    for(i=0;i<N;i++)
    {
        pf("\n\nEnter information of Student %d==>\n",i+1);
        pf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        pf("\nEnter Roll Number:");
        sf("%d",&S[i].Roll_number);
        getchar();                              //integer er por ekta nw line niye niche tai getchar() use kora hoyeche
        pf("\nEnter First Name:");                 //gets() sudhu nw line porjonto
        gets(S[i].First_name);
        pf("\nEnter Last Name:");
        gets(S[i].Last_name);
        pf("\nEnter Age:");
        sf("%d",&S[i].age);
        pf("\nEnter Gender:");
        getchar();
        gets(S[i].gender);

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
        pf(" \nRoll Number: %d",S[i].Roll_number);

        pf(" \nFirst Name: %s",S[i].First_name);

        pf(" \nLast Name: %s",S[i].Last_name);

        pf(" \nAge: %d",S[i].age);

        pf(" \nGender: %s",S[i].gender);


    }
}
int main()
{
    pf("<==C program to store and display information of 10 students==>");
    store();
    display();
}
