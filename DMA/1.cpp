//Program to take 10 numbers from user and display numbers which aren't prime
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=10,i=0,j=0,count=0;
	int *p;
	p=(int *)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("\nSorry! Memory cannot be allocated.");
		exit (0);
	}
	for(i=0;i<n;i++)
	{
		printf("\nEnter element %d: ",i+1);
		scanf("%d",p+i);
	}
	printf("\nThe numbers which are not prime are:");
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=1;j<=*(p+i);j++)
		{
			if(*(p+i)%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			continue;
		}
		else
		{
			printf("\n%d",*(p+i));
		}
	}
	return 0;
}
