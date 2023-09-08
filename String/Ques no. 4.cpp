//Program to count the number of vowels and spaces
#include<stdio.h>
int main()
{
	char a[100];
	int i=0,space=0,vowel=0;
	printf("\nEnter a sentence: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			space++;
		}
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
			vowel++;
		}
	}
	printf("\nThe given sentence is: ");
	puts(a);
	printf("\nThere are %d spaces.",space);
	printf("\nThere are %d vowels.",vowel);
	return 0;
}
