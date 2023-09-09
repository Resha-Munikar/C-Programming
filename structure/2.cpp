/*Write a program using structure to input records of 5 students. Members include
name, roll number and marks obtained in math, C programming and english. Display
the records of students who have passed in C progrmming. */
#include<stdio.h>
#include<stdlib.h>
struct student{
	char name[50];
	int roll;
	struct marks
	{
		int c;
		int math;
		int english;
	}std;
};
int main()
{
	struct student x[5];
	int i=0;
	printf("\nEnter details:");
	for(i=0;i<5;i++)
	{
		fflush(stdin);
		printf("\nEnter name for x[%d]: ",i+1);
		gets(x[i].name);
		printf("\nEnter roll for x[%d]: ",i+1);
		scanf("%d",&x[i].roll);
		printf("\nEnter marks of c for x[%d]: ",i+1);
		scanf("%d",&x[i].std.c);
		printf("\nEnter marks of math for x[%d]: ",i+1);
		scanf("%d",&x[i].std.math);
		printf("\nEnter marks of englsih for x[%d]: ",i+1);
		scanf("%d",&x[i].std.english);
	}
	printf("\nThe students have passed in C programming are:");
	for(i=0;i<5;i++)
	{
		if(x[i].std.c>=40)
		{
			printf("\nName=%s\tRoll=%d",x[i].name,x[i].roll);
		}
	}
	return 0;
}
