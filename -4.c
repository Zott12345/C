#include<stdio.h>
int main()
{
    int N;
    int n;
    int sum=0;
    int count=0;
    float average=0;
    scanf("%d",&N);    
    if(N==0)
	{
         average=0;
    }
    else{
    for(int i=0;i<N;i++)
	{
        scanf("%d",n);
        if(n>=60)
            count++;
        sum+=n;
    }
        average = sum*1.0/N;
    }
    printf("average = %.1f\ncount = %d\n",average,count);
    return 0;
}
