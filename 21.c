#include<stdio.h>
#include<string.h>
int main()
{
	int n,k;
	scanf("%d %d\n",&n,&k);
	int a[100];
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i = 0;i < k;i++)
	{
		for(int j = 0;j < n-1-i;j++)
		{
			if(a[j] > a[j+1])
			{
				int temp;
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(int i = 0;i < n;i++)
	{
		printf("%d",a[i]);
		if(i != n-1)
		{
			printf(" ");
		}
	}
	return 0;
}