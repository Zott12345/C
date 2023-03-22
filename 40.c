#include<stdio.h>
 
int x1=0,x2=0;
int win(int a[],int x,int y){

    int sum = a[0] + a[2];
    if(a[1] == sum && a[3] != sum)
	{
       x1++;
    }
    if(a[3] == sum && a[1] != sum)
	{
       x2++;
    }
    if(x1 > x)
	{
        printf("A\n");
        printf("%d",x2);
        return 1;
    }
    if(x2 > y)
	{
        printf("B\n");
        printf("%d",x1);
        return 1;
    }
    return 0;
}
int main(){
    int a,b;//酒量
    int buf[100];//缓存数据
    int n;//局数
    scanf("%d %d",&a,&b);
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        for(int j = 0;j < 4;j++){
            scanf("%d",&buf[j]);
        }
        int flag = win(buf,a,b);//调用该函数判断划拳结果
        if(flag){//是否有人倒下
            break;
        }
    }
    return 0;
}
