#include<stdio.h>
#include<string.h>
int main()
{
	int n,k,i,j;
	scanf("%d %d",&n,&k);
	char a[n][11];
	for(i = 0;i < n;i++)
	{
		scanf("%s",a[i]);
	}
	for(i = 0;i < k;i++)
	{
		for(j = 0;j < n-1-i;j++)
		{
			if(strcmp(a[j],a[j+1]) > 0)
			{
				char temp[11];
				strcpy(temp,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp);
			}
		}
	}
	for(i = 0;i < n;i++)
	{
		printf("%s\n",a[i]);
	}
	return 0;
}