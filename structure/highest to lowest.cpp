#include<stdio.h>
#include<stdlib.h>
struct employee{
	int id;
	char name[50];
	int salary;
};
int main()
{
	struct employee *p,temp;
	int n=0,i=0,j=0;
	printf("\nEnter the number of employees: ");
	scanf("%d",&n);
	p=(struct employee *)malloc(n*sizeof(struct employee));
	if(p==NULL)
	{
		printf("\nSorry!Memory cannot be allocated.");
		exit(0);
	}
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("\nEnter name: ");
		gets((p+i)->name);
		printf("\nEnter id and salary: ");
		scanf("%d%d",&(p+i)->id,&(p+i)->salary);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((p+i)->salary<(p+j)->salary)
			{
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	printf("\nThe details of employees in descending order is:");
	printf("\nName\tId\tSalary");
	for(i=0;i<n;i++)
	{
		printf("\n%s\t%d\t%d",(p+i)->name,(p+i)->id,(p+i)->salary);
	}
	return 0;
}
