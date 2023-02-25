#include<stdio.h>
#include<string.h>
int main()
{
	int index=-1,i=-1;
	char ch,s;
	scanf("%c\n",&s);
	while((ch=getchar()) != EOF)
	{
		i++;
		if(ch==s)
		{
			index=i;
		}
	}
	if(index == -1)
	{
		printf("Not Found");
	}
	else
	{
		printf("index = %d",index);
	}
	return 0;
}