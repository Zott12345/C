#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int count=0,sum=0;
    double P;
    scanf("%d\n",&N);
    for (int i=0; i<N; i++)
    {
        int a;
        scanf("%d",&a);
        if(a>=60)
        {
            count ++;
        }
        sum=sum+a;
    }
    P= N==0? 0: sum*1.0/N;
    printf("average = %.1f\n",P);
    printf("count = %d",count);
}

