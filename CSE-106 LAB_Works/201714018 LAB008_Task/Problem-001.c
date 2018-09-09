#include<stdio.h>
#define pf printf
#define sf scanf
#define n 3
int main()
{
    int r,c;
    int mat[3][3];
    pf("Input elements in array:\n");
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            sf("%d",&mat[r][c]);
        }
    }

    //sum of rows
    for(r=0;r<n;r++)
    {
        int sum=0;
        for(c=0;c<n;c++)
        {
            sum+=mat[r][c];
        }
        pf("Sum of row %d = %d\n",r+1,sum);
    }
    pf("...\n");

    //sum of colmn

    for(c=0;c<n;c++)
    {
        int sum=0;
        for(r=0;r<n;r++)
        {
            sum+=mat[r][c];
        }
        pf("Sum of column %d = %d\n",c+1,sum);
    }


}
