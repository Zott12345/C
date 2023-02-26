#include<stdio.h>
int main ()
{
	int i, k;
	char line [80];
	k=0;
	while ((line[k]=getchar())!='\n')
		k++;
	line[k]='0';
	for (i=k-1; i>=0; i--)
	putchar (line [i]);
	return 0;	
}
