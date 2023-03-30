#include<stdio.h>
int main()
{
	double O,H,L,C;
	int flag = 0;
	char* a[20];
	scanf("%lf %lf %lf %lf",&O,&H,&L,&C);
	if(C < O)
	{
		a[20] = "BW-Solid";
	}
	else if(C > O)
	{
		a[20] = "R-Hollow";
	}
	else
	{
		a[20] = "R-Cross";
	}
	printf("%s",a[20]);
	if(L < O&&L < C)
	{
		flag++;
	}
	if(H > O&&H > C)
	{
		flag = flag+2;
	}
	switch(flag)
	{
		case 1: printf(" with Lower Shadow");
            break;
		case 2: printf(" with Upper Shadow");
            break;
		case 3: printf(" with Lower Shadow and Upper Shadow");
            break;
	}
	return 0;
}