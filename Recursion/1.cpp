//Program to find sum of natural numbers
#include<stdio.h>
int sum(int);
int main()
{
	int num=0,result=0;
	printf("\nEnter a number: ");
	scanf("%d",&num);
	result=sum(num);
	printf("\nSum=%d",result);
	return 0;
}
int sum(int n)
{
	if(n!=0)
	{
		return n+sum(n-1);
	}
	else
	{
		return 0;
	}
}
