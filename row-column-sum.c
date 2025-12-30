#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	int rowsum,colsum;
	printf("Enter the matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Our matrix is : %d \n",a[i][j]);
		}
	}
	printf("Sum of row \n");
	for(i=0;i<3;i++)
	{
		rowsum=0;
		for(j=0;j<3;j++)
		{
			rowsum = rowsum + a[i][j];
		}
		printf("row %d = %d \n",i+1,rowsum);
	}
	printf("Sum of colum \n");
	for(j=0;j<3;j++)
	{
		colsum=0;
		for(i=0;i<3;i++)
		{
			colsum = colsum + a[i][j];
		}
		printf("colum %d = %d \n",j+1,colsum);
	}
}

