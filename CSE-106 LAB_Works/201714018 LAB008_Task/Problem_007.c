#include<stdio.h>
#define pf printf
#define sf scanf
#define n 3
int main()
{
    int mat1[n][n],mat2[n][n];
    int r,c;
    pf("Input elements of Matrix1==>\n");
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            sf("%d",&mat1[r][c]);
        }
    }


    pf("Input elements of Matrix2==>\n");
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            sf("%d",&mat2[r][c]);
        }
    }

    int flag=1;
    for(r=0;r<n;r++)
    {
        for(c=0;c<n;c++)
        {
            if(mat1[r][c]!=mat2[r][c])
            {
                flag==0;
                break;
            }

        }
    }

    if(flag)
        pf("Equal");
    else
        pf("Not Equal");
}
