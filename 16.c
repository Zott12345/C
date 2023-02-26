#include<stdio.h>
int main()
{
	int i;
	char ch[80];
	int k=0;
	while((ch[k]=getchar()) != '\n')
	{
		k++;
	}

	for(i=k-1;i>=0;i--)
	{
		printf("%c",ch[i]);
	}
	return 0;
}