//Program to enter 10 numbers and calculate even and odd numbers count
#include<stdio.h>
int main()
{
	int a[10],e=0,o=0,i=0;
	int *p;
	p=a;
	for(i=0;i<10;i++)
	{
		printf("\nEnter element %d: ",i+1);
		scanf("%d",p+i);
		if(*(p+i)%2==0)
		{
			e++;
		}
		else
		{
			o++;
		}
	}
	printf("\nThere are %d even numbers.",e);
	printf("\nThere are %d odd numbers.",o);
	return 0;
}
