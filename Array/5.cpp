//Program to take 3*3 matrix from user and calculate sum of four corners element
#include<stdio.h>
int main()
{
	int a[3][3],i=0,j=0,sum=0;
	printf("\nEntering elements for matrix:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter element for [%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			if((i==0||i==2)&&(j==0||j==2))
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("\nThe sum of four corner element is %d.",sum);		
	return 0;	
}
