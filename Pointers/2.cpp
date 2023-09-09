//Program to find highest value among 10 numbers given by the user
#include<stdio.h>
int main()
{
	int a[10],i=0,gt=0;
	int *p;
	p=a;
	for(i=0;i<10;i++)
	{
		printf("\nEnter element %d: ",i+1);
		scanf("%d",p+i);
		if(*(p+i)>gt)
		{
			gt=*(p+i);
		}
	}
	printf("\nThe greatest number is %d.",gt);
	return 0;
}
