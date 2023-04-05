#include<stdio.h>

int main()

{

    int n,m=1,sum=0,i,j;

    scanf("%d",&n);

    for(i=1;i<=n;i++)

    {

        m=1;

        for(j=1;j<=i;j++)

            m*=j;

        sum+=m;

    }

    printf("%d",sum);

    return 0;

}
