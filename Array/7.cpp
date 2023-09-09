//Program to take 10 numbers from user, arrange them in ascending order and count total odd numbers
#include<stdio.h>
int main()
{
	int a[10],i=0,j=0,temp=0,odd=0;
	for(i=0;i<10;i++)
	{
		printf("\nEnter element %d: ",i+1);
		scanf("%d",&a[i]);
		if(a[i]%2==1)
		{
			odd++;
		}
	}
	printf("\nThe ascending order is:");
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		
		}
			printf("\n%d",a[i]);
	}
	printf("\nThere are %d odd numbers.",odd);
	return 0;
}
