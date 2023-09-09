//Program using fuction to swap two numbers by passing pointers
#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a=0,b=0;
	printf("\nEnter value for a: ");
	scanf("%d",&a);
	printf("\nEnter value for b: ");
	scanf("%d",&b);
	printf("\nBefore swapping: a=%d\tb=%d",a,b);
	swap(&a,&b);
	//printf("\nAfter swapping: a=%d\tb=%d",a,b);
	return 0;
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("\nAfter swapping: a=%d\tb=%d",*x,*y);
}
