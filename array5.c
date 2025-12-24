#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("Enter element of array: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Positive element \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]>0)
			printf("%d",a[i][j]);
		}
	}
	printf("Negative  element \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]<0)
			printf("%d",a[i][j]);
		}
	}

}
