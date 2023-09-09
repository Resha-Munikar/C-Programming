//Program to take 10 numbers from user and arrange them in reverse order
#include<stdio.h>
int main()
{
	int a[10],b[10],i=0,j=0;
	for(i=0;i<10;i++)
	{
		printf("\nEnter element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=9;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}
	printf("\nThe reverse order is:");
	for(j=0;j<10;j++)
	{
		printf("\n%d",b[j]);
	}
	return 0;
}
