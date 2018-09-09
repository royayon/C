// 3.Write a C program to find the matrix multiplication of two 3x3 matrix.
#include<stdio.h>

int main()
{
	int mat1[3][3];
	int mat2[3][3];
	int mat3[3][3];
	int i,j;
	
	//matrix inputs
	printf("Input First Matrix==>\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
			scanf("%d",&mat1[i][j]);
	}
	printf("Input Second Matrix==>\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
			scanf("%d",&mat2[i][j]);
	}
	
	
	//multiplication process
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			mat3[i][j]=((mat1[i][0] * mat2[0][j]) + (mat1[i][1] * mat2[1][j]) + (mat1[i][2] * mat2[2][j])); 
		}
	}
	
	//output Matrix
	printf("\nOutput Matrix==>\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
			printf("%d ",mat3[i][j]);
		printf("\n");
	}

}

