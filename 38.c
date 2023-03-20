#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	double z = 1;
	if(n < 0)
	{
		z = z*1.5;
		n = -n;
	}
	if(n/2 == 1)
	{
		z = z*2;
	}
	double a = 0,b = 0;
	while(n != 0)
	{
		a++;
		if(n == 2)
		{
			b++;
			break;
		}
		n = n/10;
		if(n%10 == 2)
		{
			b++;
		}
	}
	z = (b/a)*z*100;
	printf("%.2f%%",z);
	return 0;
}