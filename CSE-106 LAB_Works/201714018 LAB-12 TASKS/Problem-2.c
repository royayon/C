#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
    FILE *fp;
    int age,salary,i;
    char name[15];
    fp=fopen("EMPLOYEE_DATA.txt","r");

    for(i=0;i<3;i++)
    {
        fscanf(fp,"%s %d %d\n",&name,&age,&salary);
        pf("\nEnter employee information of-%d",i+1);
        pf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
        pf("\nEnter Name:%s",name);

        pf("\nEnter AGE:%d",age);

        pf("\nEnter Salary:%d",salary);
        pf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    }
    fclose(fp);
}

