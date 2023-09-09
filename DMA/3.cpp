//Program to take 10 numbers from user and add them and check whether sum is palindrome or not
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=10,sum=0,temp=0,i=0,rev=0,rem=0;
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
		rem=sum%10;
		rev=rev*10+rem;
		sum=sum/10;
	}
	if(temp==rev)
	{
		printf("\nSum is palindrome.");
	}
	else
	{
		printf("\nSum is not palindrome.");
	}	
	return 0;
}
