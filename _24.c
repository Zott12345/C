#include<stdio.h>
int main()
{
	int n;
	long a[] = {0},b[] = {0};
	scanf("%d\n",&n);
	int i = 0,j = 0;
	for(i = 0;i < n;i++)
	{
		scanf("%d/%d ",&a[i],&b[i]);
	}
	int x = a[0],y = b[0],t;
	for(j = 1;j < n;j++)
	{
		x = x*b[j]+y*a[j];
		y = y*b[j];
		int s = x,d = y;
		while(y != 0)
		{
			t=x%y;
			x=y;
			y=t;
		}
		x = s/x;
		y = d/x;
	}
	if((x/y) == 0)
	{
		printf("%d",x/y);
	}
	else
	{
		printf("%d/%d",x,y);
	}
	return 0;
}