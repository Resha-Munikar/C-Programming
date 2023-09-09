//Program to check whether number is armstrong or not by passing ponters 
#include<stdio.h>
#include<math.h>
int armstrong(int*);
int main()
{
	int num=0,result=0,temp=0;
	printf("\nEnter a number: ");
	scanf("%d",&num);
	temp=num;
	result=armstrong(&num);
	if(result==temp)
	{
		printf("\nIt is armstrong.");
	}
	else
	{
		printf("\nIt is not armstrong.");
	}
	return 0;
}
int armstrong(int *x)
{
	int sum=0,rem=0,count=0,temp1=0;
	temp1=*x;
	while(*x>0)
	{
		*x=*x/10;
		count++;
	}
	while(temp1>0)
	{
		rem=temp1%10;
		sum=sum+pow(rem,count);
		temp1=temp1/10;
	}
	return sum;
}
