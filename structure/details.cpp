#include<stdio.h>
#include<stdlib.h>
struct emp_record{
	int id;
	char name[50];
	int age;
	int salary;
};
int main()
{
	struct emp_record x,y;
	printf("\nEnter id of x: ");
	scanf("%d",&x.id);
	fflush(stdin);
	printf("\nEnter name of x: ");
	gets(x.name);
	printf("\nEnter age and salary of x: ");
	scanf("%d%d",&x.age,&x.salary);
	printf("\nEnter id of y: ");
	scanf("%d",&y.id);
	fflush(stdin);
	printf("\nEnter name of y: ");
	gets(y.name);
	printf("\nEnter age and salary of y: ");
	scanf("%d%d",&y.age,&y.salary);
	printf("\nThe details of x are:");
	printf("\nName: ");
	puts(x.name);
	printf("\nId=%d",x.id);
	printf("\nAge=%d",x.age);
	printf("\nSalary=%d",x.salary);
	printf("\nThe details of y are:");
	printf("\nName: ");
	puts(y.name);
	printf("\nId=%d",y.id);
	printf("\nAge=%d",y.age);
	printf("\nSalary=%d",y.salary);
	return 0;
}
