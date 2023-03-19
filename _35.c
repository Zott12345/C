#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    scanf("%d",&n); 
    char str[n][80];
    char min[100];
    for(i=0;i<n;i++)
    {
    	scanf("%s",str[i]);
	}
    strcpy(min,str[0]);
    for(i=1;i<n;i++)
	{
    	if(strcmp(str[i],min)<0) 
    	{
    		strcpy(min,str[i]);
		}
    }
    printf("Min is: %s",min);
} 
