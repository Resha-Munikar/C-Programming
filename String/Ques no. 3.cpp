//Program to check whether the given strings are identical or not
#include<stdio.h>
int main()
{
	char a[100],b[100];
	int i=0,test=0;
	printf("\nEnter string 1: ");
	gets(a);
	printf("\nEnter string 2: ");
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65||a[i]<=90)
		{
			a[i]=a[i]+32;
		}
	}
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]>=65||b[i]<=90)
		{
			b[i]=b[i]+32;
		}
	}
	for(i=0;a[i]!='\0'||b[i]!='\0';i++)
	{
		if(a[i]==b[i])
		{
			test=1;
		}
		else
		{
			test=0;
			break;
		}
	}
	if(test==1)
	{
		printf("\nGiven strings are identical.");
	}
	if(test==0)
	{
		printf("\nGiven strings are not identical.");
	}
	return 0;
}
