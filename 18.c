#include<stdio.h>
int main()
{
	int i,j;
	int z,x;
	scanf("%d %d",&i,&j);
	int a,b,a1,b1;
	a=i/100;
	b=i%100;
	a1=j/100;
	b1=j%100;
	if(b1 < b)
	{		x=b1+60-b;
			z=a1-1-a;
	}
	else
	{
		x=b1-b;
		z=a1-a;
	}	printf("%02d:%02d",z,x);
}