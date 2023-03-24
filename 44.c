#include <stdio.h>
#include<string.h>
int main()
{
    char str[1001];
	int a[100] = {}, i, n;
    gets(str);
    for(i = 0; i < strlen(str); i++)
    {
        n = str[i]-'0';
        a[n]++;
    }
    for(i = 0; i <= 9;i++)
    {
    	if(a[i] != 0)
    	{
    		printf("%d:%d\n",i,a[i]);
		}
	}
    return 0;
}
