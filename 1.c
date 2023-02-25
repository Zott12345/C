#include<stdio.h>
int main()
{
	int n;
	double sum=0,j,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=1/i;
		sum=sum+j;
	}
	printf("sum = %.6lf",sum);
	return 0;
}