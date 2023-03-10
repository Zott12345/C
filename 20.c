#include <stdio.h>
#include <string.h>　
int main()
{
	char ch[20][10], n[10];
	int i, j, k;
	for (i = 0; i < 20; i++)
	{
		gets(ch[i]);
		if (strcmp(ch[i],"#") == 0)
			break;
	}
	for (j = 0; j < i; j++)
		for (k = j + 1; k < i; k++)
			if (strlen(ch[j]) > strlen(ch[k]))
			{
				strcpy(n,ch[j]);
				strcpy(ch[j],ch[k]);
				strcpy(ch[k],n);
			}
	for (j = 0; j < i; j++)
	{
		printf("%s ",ch[j]);
	}
	return 0;
}
