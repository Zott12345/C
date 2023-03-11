#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int fanc(int a,int b)
{
	if (a < b)                                    //将两者中大者放前，求余
	{
		int temp = a;
		a = b;
		b = temp;
	}
	int c = a % b;／／浮点错误发生地
 
	while (c != 0)                                //辗转相除
	{
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}
int main()
{
	int num[100] = { 0 };
	int deno[100] = { 0 };
	int n = 0;
	scanf("%d", &n);
	char c = '\0';
	for (int i = 0; i < n; i++)
	{
		scanf("%d%c%d", &num[i], &c, &deno[i]);
	}
	int pubd = 1;
	int pubn = 0;
	int g = 0;
	for (int i = 0; i < n -1; i++)
	{
		pubd = deno[i] * deno[i + 1];
		pubn = num[i] * deno[i + 1] + num[i + 1] * deno[i];
        if(pubn==0)
        {
            num[i + 1] = pubn;
            deno[i + 1] = pubd;
        }
        else
        {
            g = fanc(pubn, pubd);
            pubn /= g;
            pubd /= g;
            num[i + 1] = pubn;
            deno[i + 1] = pubd;
        }
	
	}
 
	pubd = deno[n - 1]*n;
	pubn = num[n - 1];
	if (pubn % pubd == 0)
	{
		printf("%d", pubn / pubd);
	}
	else
	{
		g = fanc(pubn, pubd);
		printf("%d/%d", pubn / g, pubd / g);
	}
 
	return 0;
}
