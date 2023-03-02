#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int b[n];
	for(int i=0;i<n;i++)
	{
		b[i]=100;
	}
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=0; 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(b[j]-a[i]>=0)
			{
				printf("%d %d\n",a[i],j+1);
				b[j]-=a[i];
				if(j>max) 	max=j;
				break;
			}
		}
	}
	printf("%d",max+1);
	
	
	return 0;
}
