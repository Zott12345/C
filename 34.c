#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k;
	int n;
	int t=0;
	scanf("%d",&n);
	for(i=n/5;i>=1;i--)
	{
		for(j=n/2;j>=1;j--)
		{
			for(k=n;k>=1;k--)
			{
				if(i*5+j*2+k==n)
				{
					t++;
					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",i,j,k,i+j+k);
				}
			}
		}
	}
	printf("count = %d\n",t);
}
