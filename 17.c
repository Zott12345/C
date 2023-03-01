#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	struct xinxi
	{
		char name[11];
		int birthday;
		char phone[20];
	}c[9],p;
	for(i=0;i<n;i++)
	{
		scanf("%s%d%s",&c[i].name,&c[i].birthday,&c[i].phone);
	}
	int j;
	for(i=0;i<n-1;i++)
	{
		for( j=0;j<n-1;j++ )
		{
			if(c[j].birthday>c[j+1].birthday)
			{
				p=c[j];
				c[j]=c[j+1];
				c[j+1]=p;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s %d %s\n",c[i].name,c[i].birthday,c[i].phone);
	}
	
	return 0;
}
	