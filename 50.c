#include <stdio.h>

void JudgeSpeed(int x)      //超速判断函数
{
    if(x<=60)
        printf("Speed: %d - OK",x);     //未超速
    else 
        printf("Speed: %d - Speeding",x);       //已超速
}

int main()		//主函数
{
    int a;
    scanf("%d",&a);		//输入速度
    JudgeSpeed(a);		//判断速度是否超速
    return 0;
}
