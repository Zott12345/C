#include<stdio.h>
int main()
{
	int n,i;
	double sum=0,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		j=1.0/(i*3-2);
		if(i%2==0)
		{
			sum=sum-j;
		}
		else
		{
			sum=sum+j;	
		}
	}
	printf("sum = %.3f",sum);
	return 0;
}