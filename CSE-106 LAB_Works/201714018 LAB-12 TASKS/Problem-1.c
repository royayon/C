#include<stdio.h>
#define pf printf
#define sf scanf
int main()
{
    FILE *fp;
    int age,salary,i;
    char name[15];
    fp=fopen("EMPLOYEE_DATA.txt","a");

    for(i=0;i<3;i++)
    {
        pf("Enter employee information of-%d",i+1);
        getchar();
        pf("\nEnter Name:");
        gets(name);
        pf("\nEnter AGE:");
        sf("%d",&age);
        pf("\nEnter Salary:");
        sf("%d",&salary);

        fprintf(fp,"%s %d %d\n",name,age,salary);

    }
    fclose(fp);

}
