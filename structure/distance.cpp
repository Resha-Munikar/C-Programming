#include<stdio.h>
#include<stdlib.h>
struct distance{
	int km;
	int m;
};
int main()
{
	struct distance d1,d2,sum;
	int q=0,r=0;
	printf("\nEnter km & m for d1: ");
	scanf("%d%d",&d1.km,&d1.m);
	printf("\nEnter km & m for d2: ");
	scanf("%d%d",&d2.km,&d2.m);
	sum.km=d1.km+d2.km;
	sum.m=d1.m+d2.m;
	if(sum.m>=1000)
	{
		q=sum.m/1000;
		r=sum.m%1000;
		sum.km=sum.km+q;
		sum.m=r;
	}
	printf("\nThe sum of d1 and d2 is %d km and %d m.",sum.km,sum.m);
	return 0;
}
