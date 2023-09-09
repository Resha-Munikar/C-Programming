#include<stdio.h>
#include<stdlib.h>
struct emp_record{
	int id;
	char name[50];
	int salary;
};
int main()
{
	struct emp_record x,y,z;
	printf("\nEnter name for x: ");
	gets(x.name);
	printf("\nEnter id and salary for x: ");
	scanf("%d%d",&x.id,&x.salary);
	fflush(stdin);
	printf("\nEnter name for y: ");
	gets(y.name);
	printf("\nEnter id and salary for y: ");
	scanf("%d%d",&y.id,&y.salary);
	fflush(stdin);
	printf("\nEnter name for z: ");
	gets(z.name);
	printf("\nEnter id and salary for z: ");
	scanf("%d%d",&z.id,&z.salary);
	if(x.salary>y.salary)
	{
		if(x.salary>z.salary)
		{
			printf("\nThe detail of employee with highest salary is %s,%d,%d.",x.name,x.id,x.salary);
		}
		else
		{
			printf("\nThe detail of employee with highest salary is %s,%d,%d.",z.name,z.id,z.salary);
		}
	}
	if(y.salary>x.salary)
	{
		if(y.salary>z.salary)
		{
			printf("\nThe detail of employee with highest salary is %s,%d,%d.",y.name,y.id,y.salary);
		}
		else
		{
			printf("\nThe detail of employee with highest salary is %s,%d,%d.",z.name,z.id,z.salary);
		}
	}
	return 0;
}
