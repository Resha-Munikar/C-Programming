//Program to find power of a given number
#include<stdio.h>
int power(int,int);
int main()
{
	int base=0,x=0,result=0;
	printf("\nEnter base and power: ");
	scanf("%d%d",&base,&x);
	result=power(base,x);
	printf("\nThe answer is %d.",result);
	return 0;
}
int power(int m,int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return m*power(m,n-1);
	}
}
