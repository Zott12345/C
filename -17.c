#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
struct xinxi
{
	char a[11];
	int date;
	char b[20];
}c[9],p;
int i;
for(i=0;i<n;i++)
{
	scanf("%s%d%s",&c[i].a,&c[i].date,&c[i].b);
}
for(i=0;i<n-1;i++)
{
	int j=0;
	for(;j<n-1;j++)
	{
		if(c[j].date>c[j+1].date)
		{
		p=c[j];c[j]=c[j+1];c[j+1]=p;
		}
	}
}
for(i=0;i<n;i++)
{
	printf("%s %d %s\n",c[i].a,c[i].date,c[i].b);
}
return 0;
}
