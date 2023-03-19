#include<stdio.h>
#include<string.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	char a[n][80];
	char min[100];
	for(i = 0;i < n;i++)
	{
		scanf("%s",a[i]);
	}
	strcpy(min,a[0]);
	for(i = 1;i < n;i++)
	{
		if(strcmp(a[i],min) < 0);
		{
			strcpy(min,a[i]);
		}
	}
	printf("Min is: %s",min);
	return 0;
}