//Program to find factorial of a given number
#include<stdio.h>
int fact(int);
int main()
{
	int num=0,result=0;
	printf("\nEnter a number: ");
	scanf("%d",&num);
	result=fact(num);
	printf("\nThe factorial of a given number is %d.",result);
	return 0;
}
int fact(int m)
{
	if(m==0)
	{
		return 1;
	}
	else
	{
		return m*fact(m-1);
	}
}
