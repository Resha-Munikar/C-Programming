//Program to take 10 numbers from user and arrange them in reverse order
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=10,i=0;
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
	printf("\nThe reverse order is:");
	for(i=n-1;i>=0;i--)
	{
		printf("\n%d",*(p+i));
	}
	return 0;
}
