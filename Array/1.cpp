//Program to take 10 numbers from user and display prime numbers
#include<stdio.h>
int main()
{
	int i=0,j=0,a[10],count=0;
	for(i=0;i<10;i++)
	{
		printf("\nEnter number %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nThe prime numbers are:");
	for(i=0;i<9;i++)
	{
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("\n%d",a[i]);
		}
		count=0;
	}
	return 0;
}
