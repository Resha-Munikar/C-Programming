//Program to check whether number is armstrong or not using function
#include<stdio.h>
#include<math.h>
int armstrong(int);
int main()
{
	int num=0,result=0;
	printf("\nEnter a number: ");
	scanf("%d",&num);
	result=armstrong(num);
	if(result==num)
	{
		printf("\nIt is armstrong.");
	}
	else
	{
		printf("\nIt is not armstrong.");
	}
	return 0;
}
int armstrong(int x)
{
	int sum=0,rem=0,count=0,temp=0;
	temp=x;
	while(x>0)
	{
		x=x/10;
		count++;
	}
	while(temp>0)
	{
		rem=temp%10;
		sum=sum+pow(rem,count);
		temp=temp/10;
	}
	return sum;
}
