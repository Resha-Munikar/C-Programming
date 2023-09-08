//Program to display reverse of a string
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[100],b[100];
	int i=0,j=0,count=0;
	fflush(stdin);
	printf("\nEnter a string: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		count++;
	}
	for(i=count-1;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}
	fflush(stdin);
	printf("\nThe given string is: ");
	puts(a);
	printf("\nThe reverse of given string is: ");
	puts(b);
	return 0;
}
