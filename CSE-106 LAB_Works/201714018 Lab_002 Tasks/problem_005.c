//electricity bill
#include<stdio.h>
int e_bill(float b,float u)
{
    return b*u;
}

int main()
{
    float b,bill_1,bill_2,bill_3,bill_4,bill;
    printf("Enter electricity bill:");
    scanf("%f",&b);
    if(b<=50)
        bill=e_bill(b,0.50);
    else if(b<=150)
    {
        bill_1=e_bill(50,0.50);
        bill_2=e_bill(b-50,0.75);
        bill=bill_1+bill_2;
    }
    else if(b<=250)
    {
        bill_1=e_bill(50,0.50);
        bill_2=e_bill(100,0.75);
        bill_3=e_bill(b-150,1.20);
        bill=bill_1+bill_2+bill_3;
    }
    else if(b>250)
    {
        bill_1=e_bill(50,0.50);
        bill_2=e_bill(100,0.75);
        bill_3=e_bill(100,1.20);
        bill_4=e_bill(b-250,1.50);

        bill=bill_1+bill_2+bill_3+bill_4;
    }
    printf("Total Electricity Bill==>%f",(bill+bill*.2));

}

