#include <stdio.h>
int main()
{
	int n, k; 
	scanf("%d%d", &n, &k);
	if((k < 1 || k > 10) || (n < 10 || n > 10000)) // n(10≤n≤10000)和k(1≤k≤10)
	{
		return 1;
	}
	int prime1[n]; // 将所有素数放入数组中 
	int i, j;
	int count = 0; // 存入数组的素数个数 
	for(i = 3;i <= n;i += 2)
	{
		int a = 1;
		for(j = 0;j < count;j++)
		{
			if(i % prime1[j] == 0)
			{
				a = 0; // 相当于于一个开关 
				break;
			}
		}
		if(a)
		{
			prime1[count] = i;
			count += 1;
		}	
	}
	int l = 0;
	int sum = 0; // 素数和 
	int w = 0; // 计数器 
	count += 1;
	while(count--)
	{
		sum += prime1[count-1];
		w += 1;
		if(w == k && count != 0)
		{
			printf("%d=", prime1[count-1]);
		}
		else if(count == 0)
		{
			printf("%d=", 2);
			l = 2;
		}
		else
		{
			printf("%d+", prime1[count-1]);
		}
		if(w == k)
		{
			break;
		}	
	}
	printf("%d", sum+l);
	return 0;
}
