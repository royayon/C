#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#define pf printf
#define sf scanf
struct Student
{
    int id;
    double gpa;
    char initial;
    char * name;
};
int main()
{
    struct Student *S=(struct Student*)malloc(1*sizeof(struct Student));
    //char * name=&S->name;
    //name=(char*)malloc(20*sizeof(char));
    S->name=(char*)malloc(20*sizeof(char));


    pf("===Reading Information Of Students===\n");
    pf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    pf("Enter id==>");
    sf("%d",&S->id);
    pf("Enter GPA==>");
    sf("%lf",&S->gpa);
    getchar();
    pf("Enter Initial==>");
    sf("%c",&S->initial);
    getchar();
    pf("Enter Name==>");
    gets(S->name);


    pf("\n===Printing Information Of Students===\n");
    pf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    pf("Id==>");
    pf("%d",S->id);
    pf("\nGPA==>");
    pf("%lf",S->gpa);
    pf("\nInitial==>");
    pf("%c",S->initial);
    pf("\nName==>");
    puts(S->name);


    free(S);
}

