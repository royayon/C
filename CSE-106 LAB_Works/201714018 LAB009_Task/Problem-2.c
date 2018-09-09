#include<stdio.h>
#include<strings.h>
#define pf printf
#define sf scanf
struct students{
    char name[20];
    int marks[5];
    int total;
    float percentage;
};
int main()
{
    float percentage;
    int i;
    struct students s1;
    pf("\nEnter Name==>");
    gets(s1.name);
    pf("\nEnter 5 Marks==>");
    s1.total=0;
    for(i=0;i<5;i++)
    {
        pf("\nEnter Marks of SUB %d==>",i+1);
        sf("%d",&s1.marks[i]);
        s1.total+=s1.marks[i];
    }
    for(i=0;i<5;i++)
    {
        pf("Marks of SUB %d==> %d\n",i+1,s1.marks[i]);

    }
    pf("\nTotal Marks of 5 Subjects= %d",s1.total);
    s1.percentage=((s1.total)*.2);
    pf("\nOverall Percentage==> %.2f",s1.percentage);
}
