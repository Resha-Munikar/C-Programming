//Program to add all the even numbers in an array and display result
#include<stdio.h>
int main()
{
	int a[50],n=0,i=0,sum=0;
	int *p;
	p=a;
	printf("\nEnter how many numbers you want to input?");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter element %d: ",i+1);
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		if(*(p+i)%2==0)
		{
			sum=sum+*(p+i);
		}
	}
	printf("\nThe sum of even numbers is %d.",sum);
	return 0;
}
