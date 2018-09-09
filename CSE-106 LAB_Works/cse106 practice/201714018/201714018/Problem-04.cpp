// 4.Write a C program to find the transpose of a 3x3 matrix (rows will become columns, columns will become rows).
#include<stdio.h>

int main()
{
	int mat1[3][3];
	int mat2[3][3];
	int i,j;
	
	//matrix input
	printf("Input A Matrix==>\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
			scanf("%d",&mat1[i][j]);
	}
	
	//transpose
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
			mat2[i][j]=mat1[j][i];
	}
	
	//output Matrix
	printf("\nOutput Matrix==>\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
			printf("%d ",mat2[i][j]);
		printf("\n");
	}
}
