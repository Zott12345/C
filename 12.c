#include<stdio.h>
#include<string.h>
int main()
{

	int N;
	scanf("%d\n",&N);
	char name[10][20],birth[10][20],sex[10][20],tel[10][20],phone[10][20];
	for(int i=0;i<N;i++)
		scanf("%s%s%s%s%s",name[i],birth[i],sex[i],tel[i],phone[i]);
	int K;
	scanf("%d",&K);
	int label[K];
	for(int i=0;i<K;i++)
		scanf(" %d",&label[i]);
		

	for(int i=0;i<K;i++)
	{
        int t=label[i];
		if(t>N-1 || t<0)
			printf("Not Found\n");
		else
		{			
			printf("%s %s %s %s %s\n",name[t],tel[t],phone[t],sex[t],birth[t]);	
		}
	}
	return 0;
}
