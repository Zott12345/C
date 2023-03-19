#include<stdio.h>
int main()
{
	int a[3];
	for(int i = 0;i < 3;i++)
	{
		scanf("%d",&a[i]);
	}
	int i,j;
  for(int i = 0;i < 2;i++)
    {
        for(int j = 0;j<=2-1-i;j++)
        {
            if(a[j] > a[j+1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;                            
            }        
        }    
    }
	for(int i = 0;i < 3;i++)
	{
		printf("%d",a[i]);
		if(i != 2)
		{
			printf("->");
		}
	}
}