#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%2d:%2d",&a,&b);
    if(a<=12)
    {
        printf("Only %02d:%02d.  Too early to Dang.",a,b);
    }
    else
	{
        if(b>=1)
        {
        	c=a-12+1;
		}
        else 
        {
        	c=a-12;
		}
        for(int i=0;i<c;i++)
        {
        	printf("Dang");
		}
    }
    return 0;
}
