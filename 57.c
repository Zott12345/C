#include <stdio.h>
int main()
{
    int n=0;
    int i=0;
    int sum=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=sum*2;
    }
    printf("2^%d = %d\n",n,sum);
return 0;
}
