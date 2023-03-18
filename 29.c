#include<stdio.h>
#include<stdlib.h>
long sum_int,sum_son,sum_mom;

long gongyinshu(long mom1,long mom2)
{
    long m1=mom1,m2=mom2,ys;
    while(m2!=0)
    {
        ys=m1%m2;
        m1=m2;
        m2=ys;
    }
    return m1;
}

int main()
{
	int a;
	long c,d;
	scanf("%d",&a);
	long num[a][2];
	for(int i=0;i<a;i++)
    {
        scanf("%ld/%ld",&c,&d);
        if(d==0)
        {
            i--;
            break;
        }
        num[i][0]=c;
        num[i][1]=d;
    }

    long gbs,gys;//公倍数、公因数
    sum_int=0;
    sum_son=num[0][0];
    sum_mom=num[0][1];

    for(int i=1;i<a;i++)
    {
        if(num[i][1]==sum_mom)
            sum_son=sum_son+num[i][0];
        else
        {
            gys=gongyinshu(num[i][1],sum_mom);
            gbs=num[i][1]*sum_mom/gys;
            num[i][0]=num[i][0]*(gbs/num[i][1]);
            sum_son=sum_son*(gbs/sum_mom)+num[i][0];
            sum_mom=gbs;
        }
    }
    if(sum_son>sum_mom)
    {
        sum_int=sum_son/sum_mom;
        sum_son=sum_son%sum_mom;
    }
    if(sum_int==0 && sum_son==0)
        printf("0");
    if(sum_int!=0)
        printf("%ld",sum_int);
    if(sum_son!=0)
    {
        gys=gongyinshu(sum_mom,sum_son);
        sum_son=sum_son/gys;
        sum_mom=sum_mom/gys;
        if(sum_int!=0)
            printf(" %ld/%ld",sum_son,sum_mom);
        else
            printf("%ld/%ld",sum_son,sum_mom);
    }

	return 0;
}
