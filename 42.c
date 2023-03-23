#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int a[n][2];
	scanf("%d",&n);
	
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < 2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i = 0;i < n;i++)
	{
		double p = (a[i][0]-100)*0.9;
		double q = fabs(a[i][1]/2.0-p);
		
		if(q < p*0.1)
		{
			printf("You are wan mei!\n");
		}
		else if(a[i][1] > p*2)
		{
			printf("You are tai pang le!\n");
		}
		else
		{
			printf("You are tai shou le!\n");
		}
	}
	return 0;
}