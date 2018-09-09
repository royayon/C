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
};
int main()
{
    struct Student *S=(struct Student*)malloc(1*sizeof(struct Student));
    pf("===Reading Information Of Students===\n");
    pf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    pf("Enter id==>");
    sf("%d",&S->id);
    pf("Enter GPA==>");
    sf("%lf",&S->gpa);
    getchar();
    pf("Enter Initial==>");
    sf("%c",&S->initial);


    pf("\n===Printing Information Of Students===\n");
    pf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    pf("Id==>");
    pf("%d",S->id);
    pf("\nGPA==>");
    pf("%lf",S->gpa);
    pf("\nInitial==>");
    pf("%c",S->initial);

    free(S);
}
