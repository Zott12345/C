#include<stdio.h>
int main()
{
	double i = 2, j = 1;
	double t;
	double sum = 0;
	int n;
	scanf("%d", &n);
	while (n)
	{
      sum=sum + i/j;
      t=i;
      i=i+j;
      j=t;
      n--;
	}
	printf("%.2lf\n", sum);
	return 0;
}
