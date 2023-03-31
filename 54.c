#include<stdio.h>
#include<math.h>
 
int main()
{
    int a,BCD[2]={0};
    scanf("%d",&a);
    
    for (int i = 0,flag,tmp; i < 2 && a!=0; i++)
    {
        flag=0;
        while (flag<4&&a!=0)
        {
            if(a%2) BCD[i]+=pow(2,flag);
            a/=2,flag++;
        }
    }
    if(BCD[0]==0&&BCD[1]==0)putchar('0');
    else printf("%d%d",BCD[1],BCD[0]);
 
    return 0;    
}
