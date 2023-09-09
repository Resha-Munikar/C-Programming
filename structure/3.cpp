/*Write a program to input 5 employee records . Display 3 employee information 
who gets the highest salary. */
#include<stdio.h>
#include<stdlib.h>
struct employee{
	char name[50];
	int id;
	int salary;
};
int main()
{
	struct employee x[5],temp;
	int i=0,j=0;
	printf("\nEnter details:");
	for(i=0;i<5;i++)
	{
		fflush(stdin);
		printf("\nEnter name for x[%d]: ",i+1);
		gets(x[i].name);
		printf("\nEnter id and salary for x[%d]: ",i+1);
		scanf("%d%d",&x[i].id,&x[i].salary);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(x[i].salary<x[j].salary)
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	printf("\nThree employees with highest salary are:");
	for(i=0;i<3;i++)
	{
		printf("\n%s\t%d\t%d",x[i].name,x[i].id,x[i].salary);
	}
	return 0;
}
