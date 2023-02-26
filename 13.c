#include<stdio.h>
int main()
{
	int x,y,i,j;
	int t;	
	scanf("%d/%d",&x,&y);
	i=x;
	j=y;
	while(y != 0)
	{
		t=x%y;
		x=y;
		y=t;
	}
		printf("%d/%d",(i/x),(j/x));

	return 0;
}
