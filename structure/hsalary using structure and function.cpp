#include<stdio.h>
#include<stdlib.h>
struct employee{
	int id;
	char name[50];
	int salary;
};
struct employee hsalary(struct employee[],int);
int main()
{
	struct employee x[100],result;
	int i=0,n=0;
	printf("\nEnter the number of employees: ");
	scanf("%d",&n);
	printf("\nEnter details:");
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("\nEnter name for x[%d]: ",i+1);
		gets(x[i].name);
		printf("\nEnter id and salary for x[%d]: ",i+1);
		scanf("%d%d",&x[i].id,&x[i].salary);
	}
	result=hsalary(x,n);
	printf("\nName,id and salary of highest salary holder is %s,%d and %d.",result.name,result.id,result.salary);
	return 0;
}
struct employee hsalary(struct employee a[],int m)
{
	int i=0,gt=0;
	struct employee b;
	for(i=0;i<m;i++)
	{
		if(a[i].salary>gt)
		{
			gt=a[i].salary;
			b=a[i];
		}
	}
	return b;
}
