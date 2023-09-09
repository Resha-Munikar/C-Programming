//Program to add two arrays and count number of odd numbers in final result
#include<stdio.h>
int main()
{
	int a[5],b[5],c[5],i=0,o=0;
	int *x,*y,*z;
	x=a;
	y=b;
	z=c;
	printf("\nEntering elements for first array:");
	for(i=0;i<5;i++)
	{
		printf("\nEnter element %d: ",i+1);
		scanf("%d",x+i);
	}
	printf("\nEntering elements for second array:");
	for(i=0;i<5;i++)
	{
		printf("\nEnter element %d: ",i+1);
		scanf("%d",y+i);
	}
	for(i=0;i<5;i++)
	{
		*(z+i)=*(x+i)+*(y+i);
		if(*(z+i)%2==1)
		{
			o++;
		}
	}
	printf("\nThe sum of two arrays is:");
	for(i=0;i<5;i++)
	{
		printf("%d\t",*(z+i));
	}
	printf("\nThere are %d odd numbers.",o);
	return 0;
}
