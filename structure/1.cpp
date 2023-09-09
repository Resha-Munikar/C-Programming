/* Program with structure "Students" to contain name, faculty, id and total marks
obtained. Develop a program to read data for 5 students and display the overall 
detail of students rankwise with respect to total marks. */
#include<stdio.h>
#include<stdlib.h>
struct student{
	char name[50];
	char faculty[50];
	int id;
	int marks;
};
int main()
{
	struct student x[5],temp;
	int i=0,j=0;
	printf("\nEnter details:");
	for(i=0;i<5;i++)
	{
		fflush(stdin);
		printf("\nEnter name for x[%d]: ",i+1);
		gets(x[i].name);
		fflush(stdin);
		printf("\nEnter faculty for x[%d]: ",i+1);
		gets(x[i].faculty);
		printf("\nEnter id and marks for x[%d]: ",i+1);
		scanf("%d%d",&x[i].id,&x[i].marks);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(x[i].marks<x[j].marks)
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	printf("\nDetails of students rankwise:");
	for(i=0;i<5;i++)
	{
		printf("\n%s\t%s\%d\t%d",x[i].name,x[i].faculty,x[i].id,x[i].marks);
	}
	return 0;
}
