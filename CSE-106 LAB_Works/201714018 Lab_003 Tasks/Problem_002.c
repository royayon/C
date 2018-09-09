//Gross Salary
#include<stdio.h>
int main()
{
    int age,b_sal;
    float g_sal;
    printf("Enter Basic Salary & Age: \n");
    scanf("%d%d",&b_sal,&age);

    if(b_sal<20000&&b_sal>=10000)
    {
        g_sal=b_sal+b_sal*.2;
        printf("Gross Salary: %f",g_sal);
        if(age>=20&&age<=35)
            printf("Tax: %f",g_sal*.1);
        else if(age>=36&&age<=45)
            printf("Tax: %f",g_sal*.2);
        else if(age>=46&&age<=52)
            printf("Tax: %f",g_sal*.25);

    }
    else if(b_sal<30000&&b_sal>=20000)
    {
        g_sal=b_sal+b_sal*.25;
        printf("Gross Salary: %f",g_sal);
        if(age>=20&&age<=35)
            printf("Tax: %f",g_sal*.12);
        else if(age>=36&&age<=45)
            printf("Tax: %f",g_sal*.22);
        else if(age>=46&&age<=52)
            printf("Tax: %f",g_sal*.26);

    }
    else if(b_sal>=30000)
    {
        g_sal=b_sal+b_sal*.3;
        printf("Gross Salary: %f",g_sal);
        if(age>=20&&age<=35)
            printf("Tax: %f",g_sal*.15);
        else if(age>=36&&age<=45)
            printf("Tax: %f",g_sal*.24);
        else if(age>=46&&age<=52)
            printf("Tax: %f",g_sal*.28);

    }

}
