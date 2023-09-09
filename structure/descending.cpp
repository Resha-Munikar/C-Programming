#include<stdio.h>
#include<stdlib.h>
struct employee{
	int id;
	char name[50];
	int age;
	int salary;
};
int main()
{
	struct employee *p,temp;
	int i=0,j=0,n=0;
	printf("\nEnter the number of students: ");
	scanf("%d",&n);
	p=(struct employee *)malloc(n*sizeof(struct employee));
	if(p==NULL)
	{
		printf("\nSorry! Memory cannot be allocated.");
		exit(0);
	}
	for(i=0;i<5;i++)
	{
		printf("\nEnter name of %d: ",i+1);
		gets((p+i)->name);
		printf("\nEnter id of %d: ",i+1);
		scanf("%d",(p+i)->id);
		printf("\nEnter age nd salary of %d: ",i+1);
		scanf("%d%d",(p+i)->age,(p+i)->salary);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(*(p+i)->salary<*(p+j)->salary)
			{
				temp=*(p+j);
				*(p+j)=*(p+i);
				*(p+i)=temp;
			}
		}
	}
	printf("\nThe details of employee in descending order according to salary is:");
	printf("\nId\tName\tAge\tSalary");
	for(i=0;i<5;i++)
	{
		printf("\n%d\t%s\t%d\t%d",*(p+i)->id,*(p+i)->name,*(p+i)->age,*(p+i)->salary);
	}
	return 0;
}
