//Program to take 10 numbers from user and add them and check whether sum is armstromg or not
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n=10,sum=0,temp=0,i=0,rev=0,rem=0,temp1=0,count=0;
	int *p;
	p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("\nEnter element %d: ",i+1);
		scanf("%d",p+i);
		sum=sum+*(p+i);
	}
	printf("\nSum=%d",sum);
	temp=sum;
	while(sum>0)
	{
		sum=sum/10;
		count++;
	}
	temp1=temp;
	while(temp>0)
	{
		rem=temp%10;
		sum=sum+pow(rem,count);
		temp=temp/10;
	}
	if(temp1==sum)
	{
		printf("\nSum is armstrong.");
	}
	else
	{
		printf("\nSum is not armstrong.");
	}
	return 0;
}
