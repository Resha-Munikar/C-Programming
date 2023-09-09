//Program to take 10 numbers from user and count even and odd numbers
#include<stdio.h>
int main()
{
	int i=0,even=0,odd=0,a[10];
	for(i=0;i<10;i++)
	{
		printf("\nEnter element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("\nThere are %d even numbers.",even);
	printf("\nThere are %d odd numbers.",odd);
	return 0;
}
