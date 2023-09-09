//Program to take two 3*3 matrix, add them and display transpose of final result
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],d[3][3],i=0,j=0;
	printf("\nEntering elements for matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter element for [%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter element for [%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nThe sum of two matrices is:");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
			d[j][i]=c[i][j];
		}
		printf("\n");
	}
	printf("\nThe transpose of the sum of two matrices is:");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",d[i][j]);
		}
		printf("\n");
	}
	return 0;
}
