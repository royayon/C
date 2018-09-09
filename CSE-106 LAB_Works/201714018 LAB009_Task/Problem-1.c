#include<stdio.h>
#include<strings.h>
#define pf printf
#define sf scanf
struct emp{
    int id;
    char name[20];
    int salary;

};
int main()
{
    struct emp emp1;
    pf("Enter Name==>");
    gets(emp1.name);
    pf("\nEnter ID==>");
    sf("%d",&emp1.id);
    pf("\nEnter Salary==>");
    sf("%d",&emp1.salary);


    pf("\n\nName==>");
    puts(emp1.name);
    pf("Id==>  %d",emp1.id);
    pf("\nSalary==> %d",emp1.salary);
}
