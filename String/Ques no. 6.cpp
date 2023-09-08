//Program to combine two string
#include<stdio.h>
int main()
{
	char a[100],b[100];
	int i=0,j=0,count=0;
	printf("\nEnter string 1: ");
	gets(a);
	printf("\nEnter string 2: ");
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		count++;
	}
	a[count]=' ';
	for(i=count+1;b[j]!='\0';i++)
	{
		a[i]=b[j];
		j++;
	}
	printf("\nThe combnation of two string is: ");
	puts(a);
	return 0;
}
