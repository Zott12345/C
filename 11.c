#include<stdio.h>
int main()
{
	int n;
	int a[10];
	scanf("%d",&n);
	int i,j,z=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-2;i++)
	{
		z++;
		if(z%3!=0)
		{
			printf("%d ",(a[i+1]-a[i]));
		}
		else
		{
			printf("%d",(a[i+1]-a[i]));
		}
		
		if(z%3==0)
		{
			printf("\n");
		}
	}
	printf("%d",(a[n-1]-a[n-2]));
	return 0;
}