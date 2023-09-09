//Program to generate fibonacci series
#include<stdio.h>
int fib(int);
int main()
{
	int i=0,n=0,result=0;
	printf("\nEnter the number of series you want:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		result=fib(i);
		printf("\n%d",result);
	}
	return 0;
}
int fib(int m)
{
	if(m==0)
	{
		return 0;
	}
	else if(m==1)
	{
		return 1;
	}
	else
	{
		return fib(m-1)+fib(m-2);
	}	
}
