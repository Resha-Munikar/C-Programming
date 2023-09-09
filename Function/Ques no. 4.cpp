//Program using function to check whether number is prime or not
#include<stdio.h>
int prime(int);
int main()
{
	int n=0,result=0;
	printf("\nEnter a number: ");
	scanf("%d",&n);
	result=prime(n);
	if(result==1)
	{
		printf("\nIt is prime.");
	}
	else
	{
		printf("\nIt is not prime.");
	}
	return 0;
}
int prime(int x)
{
	int i=0,count=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
