#include<stdio.h>

int sum(int a[100], int n)
{
	int i, sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
void main()
{
	int i,j,n;
	
	printf("Eneter the size of array  :=");
	scanf("%d", &n);

	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter the elment of array [%d] :=" ,i);
		scanf("%d",&a[i]);
	}
	j= sum(a,n);
	
	printf("sum of array of elemnts is %d", j);
}
