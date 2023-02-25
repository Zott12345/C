#include<stdio.h>
int main()
{
	int n,i;
	int t,j=1;
	scanf("%d",&n);
	 
	t=n;
	while(t>9)
	{
		t=t/10;
		j=j*10;
	}
	while(j>0)
	{
		printf("%d ",n/j);
		n=n%j;
		j=j/10;
	}
	return 0;
}