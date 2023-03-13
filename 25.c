#include <stdio.h>
int main ()
{
    int x;
    int a,b,c,d;
    scanf("%d",&x);
    a = x%10;//三位数的个位数
    b = x/10%10;//三位数的十位数
    c = x/100;//三位数的百位数
    d = a*100+b*10+c;
    printf("%d",d);
    return 0;
}
