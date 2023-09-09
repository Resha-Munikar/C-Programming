//Program to take 3*3 matrix input from user and calculate sum of diagonal elements
#include<stdio.h>
int main()
{
	int a[3][3],i=0,j=0,sum=0;
	printf("\nEntering elements for matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter element for a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}

	printf("\nThe sum of diagonal elements is %d.",sum);
	return 0;
}
